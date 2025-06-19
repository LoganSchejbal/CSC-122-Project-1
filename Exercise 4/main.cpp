#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Function Definitions
void sort2(double* p, double* q);
double replace_if_greater(double* p, double x);
double average(double* a, int size);
double* maximum(double* a, int size);
char* find(char s[], char c);
char* find_last(char s[], char c);
char* find_last(char s[], char c, int n);
char* find(char s[], char t[]);
char* replace_all(const char s[], const char t[], const char u[]);
void reverse(double* a, int size);

//Main Function
int main() {

    //Part A: Function sort2
    double x, y;
    cout << "Part A: Function sort2" << endl;
    cout << "Please enter two numbers (X, Y): ";
    cin >> x >> y;

    sort2(&x, &y);
    cout << "After sorting: x = " << x << ", y = " << y << endl;

    //Part B: Function replace_if_greater
    double value, compareValue;
    cout << "\nPart B: Function replace_if_greater" << endl;
    cout << "Please enter a number (X) and a value to compare (Y): ";
    cin >> value >> compareValue;

    double oldValue = replace_if_greater(&value, compareValue);
    cout << "X now equals: " << value << ", old value was: " << oldValue << endl;

    //Part C: Function average
    int size;
    vector<double> arrAvg(size);
    cout << "\nPart C: Function average" << endl;
    cout << "Please enter the size of the array: ";
    cin >> size;
    cout << "Please enter " << size << " floating-point numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arrAvg[i];
    }

    double avg = average(arrAvg.data(), size);
    cout << "The average value is: " << avg << endl;

    //Part D: Function maximum
    vector<double> arrMax(size);
    cout << "\nPart D: Function maximum" << endl;
    cout << "Please enter the size of the array: ";
    cin >> size;
    cout << "Please enter " << size << " floating-point numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arrMax[i];
    }
    
    double* maxPtr = maximum(arrMax.data(), size);
    if (maxPtr) {
        cout << "The maximum value is: " << *maxPtr << endl;
    } 
    else {
        cout << "Array size is 0, no maximum value." << endl;
    }

    //Part E: Function find
    string strFind;
    char c;
    cout << "\nPart E: Function find" << endl;
    cout << "Please enter a string: ";
    cin.ignore();
    getline(cin, strFind);
    cout << "Please enter a character to find: ";
    cin >> c;

    char* foundChar = find(&strFind[0], c);
    if (foundChar) {
        cout << "Character '" << c << "' found at position: " << (foundChar - &strFind[0]) << endl;
    } else {
        cout << "Character '" << c << "' not found." << endl;
    }

    //Part F: Function find_last
    string strFindLast;
    cout << "\nPart F: Function find_last" << endl;
    cout << "Please enter a string: ";
    cin.ignore();
    getline(cin, strFindLast);
    cout << "Please enter a character to find the last occurrence: ";
    cin >> c;

    char* lastFoundChar = find_last(&strFindLast[0], c);
    if (lastFoundChar) {
        cout << "Last occurrence of character '" << c << "' found at position: " << (lastFoundChar - &strFindLast[0]) << endl;
    } else {
        cout << "Character '" << c << "' not found." << endl;
    }

    //Part G: Function find_last with occurrence count
    string strFindNth;
    int n;
    cout << "\nPart G: Function find_last with occurrence count" << endl;
    cout << "Please enter a string: ";
    cin.ignore();
    getline(cin, strFindNth);
    cout << "Please enter a character to find the nth occurrence: ";
    cin >> c;
    cout << "Please enter the occurrence number (n): ";
    cin >> n;

    char* nthFoundChar = find_last(&strFindNth[0], c, n);
    if (nthFoundChar) {
        cout << "Nth occurrence of character '" << c << "' found at position: " << (nthFoundChar - &strFindNth[0]) << endl;
    } 
    else {
        cout << "Character '" << c << "' not found." << endl;
    }

    //Part H: Function find substring
    string FindSubStr;
    string subStr;
    cout << "\nPart H: Function find substring" << endl;
    cout << "Please enter a string: ";
    cin.ignore();
    getline(cin, FindSubStr);
    cout << "Please enter a substring to find: ";
    getline(cin, subStr);

    char* foundSubStr = find(&FindSubStr[0], &subStr[0]);
    if (foundSubStr) {
        cout << "Substring '" << subStr << "' found at position: " << (foundSubStr - &FindSubStr[0]) << endl;
    } else {
        cout << "Substring '" << subStr << "' not found." << endl;
    }

    //Part I: Function replace_all
    string strReplace;
    cout << "\nPart I: Function replace_all" << endl;
    cout << "Please enter a string: ";
    cin.ignore(); // Clear the newline character from the input buffer
    getline(cin, strReplace);
    cout << "Please enter a substring to replace: ";
    string toReplace;
    getline(cin, toReplace);
    cout << "Please enter a substring to replace with: ";
    string replaceWith;
    getline(cin, replaceWith);

    char* replacedStr = replace_all(&strReplace[0], &toReplace[0], &replaceWith[0]);
    if (replacedStr) {
        cout << "String after replacement: " << replacedStr << endl;
    } 
    else {
        cout << "No Character Found to Replace." << endl;
    }

    //Part J: Function reverse
    vector<double> arrReverse(size);
    cout << "\nPart J: Function reverse" << endl;
    cout << "Please enter the size of the array: ";
    cin >> size;
    cout << "Please enter " << size << " floating-point numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arrReverse[i];
    }

    reverse(arrReverse.data(), size);
    cout << "Array after reversal: ";
    for (int i = 0; i < size; ++i) {
        cout << arrReverse[i] << " ";
    }
    cout << endl;

    return 0;
}

//Part A
// Function Implementations
//Make x <= y after the call
//Write a function void sort2(double* p, double* q) that receives two pointers and sorts the values to which they point. If you call sort2(&x, &y) then x <= y after the call.
void sort2(double* p, double* q){

}

//Part B
//
//Write a function double replace_if_greater(double* p, double x) that replaces the value to which p points with x if x is greater. Return the old value to which p pointed.
double replace_if_greater(double* p, double x){

}

//Part C
//
//Write a function that computes the average value of an array of floating-point data: double average(double* a, int size) In the function, use a pointer variable, not an integer index, to traverse the array elements.
double average(double* a, int size){

}

//Part D
//
//Write a function that returns a pointer to the maximum value of an array of floating-point data: double* maximum(double* a, int size) If size is 0, return nullptr.
double* maximum(double* a, int size){

}

//Part E
//
//Write a function that returns a pointer to the first occurrence of the character c in the string s, or nullptr if there is no match. char* find(char s[], char c)
char* find(char s[], char c){

}

//Part F
//
//Write a function that returns a pointer to the last occurrence of the character c in the string s, or nullptr if there is no match. char* find_last(char s[], char c)
char* find_last(char s[], char c){

}

//Part G
//
//Write a function that returns a pointer to the nth occurrence of the character c in the string s, or nullptr if there is no match. char* find_last(char s[], char c, int n)
char* find_last(char s[], char c, int n){

}

//Part H
//
//Write a function that returns a pointer to the first occurrence of the substring t in the string s, or nullptr if there is no match. char* find(char s[], char t[])
char* find(char s[], char t[]){

}

//Part I
//
//Write a function that, given strings s, t, and u, returns a string (allocated with the new operator) in which all occurrences of t in s are replaced with u: char* replace_all(const char s[], const char t[], const char u[])
char* replace_all(const char s[], const char t[], const char u[]){

}

//Part J
//
//Write a function that reverses the values of an array of floating-point data: void reverse(double* a, int size) In the function, use two pointer variables, not integer indexes, to traverse the array elements.
void reverse(double* a, int size){

}