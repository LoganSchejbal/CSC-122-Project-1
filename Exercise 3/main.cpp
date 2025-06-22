#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

vector<int> append(vector<int> a, vector<int> b) {
    for (int i = 0; i < b.size(); ++i) {
        a.push_back(b[i]);
    }
    return a;
}

vector<int> merge(vector<int> a, vector<int> b) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        result.push_back(a[i]);
        i++;
        result.push_back(b[j]);
        j++;
    }

    while (i < a.size()) {
        result.push_back(a[i]);
        i++;
    }
    while (j < b.size()) {
        result.push_back(b[j]);
        j++;
    }

    return result;
}

vector<int> merge_sorted(vector<int> a, vector<int> b) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            result.push_back(a[i]);
            i++;
        } else {
            result.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size()) {
        result.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        result.push_back(b[j]);
        j++;
    }

    return result;
}

void print_vector(const vector<int>& vec, ofstream& out) {
    for (int val : vec) {
        out << val << " ";
    }

    
    out << endl;
}

int main() {
    string path = "/Users/josephmirza/Desktop/output.txt"; // Change josephmirza to your computer's name. I am running on Mac

    ofstream outFile(path);
    if (!outFile) {
        cerr << "Failed: " << path << endl;
        return 1;
    }

    vector<int> vec1 = {1, 4, 9, 16};
    vector<int> vec2 = {9, 7, 4, 9, 11};

    outFile << "Append Results: " << endl;
    vector<int> appended = append(vec1, vec2);
    print_vector(appended, outFile);

    outFile << "\nMerge Results: " << endl;
    vector<int> merged = merge(vec1, vec2);
    print_vector(merged, outFile);

    outFile << "\nMerge Sorted Results: " << endl;
    vector<int> sort1 = {1, 4, 9, 16};
    vector<int> sort2 = {4, 7, 9, 9, 11};
    vector<int> mergedSorted = merge_sorted(sort1, sort2);
    print_vector(mergedSorted, outFile);

    outFile.close();
    return 0;
}

