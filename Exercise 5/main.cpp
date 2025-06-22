#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to read and print the joke
void printJoke(ifstream& jokeFile) {
    string line;
    while (getline(jokeFile, line)) {
        cout << line << endl;
    }
}

// Function to find and print only the last line of the file
void printPunchline(ifstream& punchlineFile) {
    punchlineFile.seekg(0, ios::end);

    int pos = punchlineFile.tellg();
    string lastLine = "";

    while (pos > 0) {
        pos--;
        punchlineFile.seekg(pos);
        char ch;
        punchlineFile.get(ch);
        if (ch == '\n') break;
    }

    getline(punchlineFile, lastLine);
    cout << lastLine << endl;
}

int main() {
    ifstream jokeFile("jokes.txt");
    printJoke(jokeFile);
    jokeFile.close();
    
    ifstream punchlineFile("punchline.txt");
    printPunchline(punchlineFile);
    punchlineFile.close();

    return 0;
}
