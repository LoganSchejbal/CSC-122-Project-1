Exercise #4:

Write the following functions, and test them all in a single main program.  Do not change the given function headers or function calls.  This exercise is all about pointers.
A.	Write a function
void sort2(double* p, double* q)
that receives two pointers and sorts the values to which they point. If you call
sort2(&x, &y)
then x <= y after the call.
B.	Write a function
double replace_if_greater(double* p, double x)
that replaces the value to which p points with x if x is greater. Return the old value to which p pointed.
C.	Write a function that computes the average value of an array of floating-point data:
double average(double* a, int size)
In the function, use a pointer variable, not an integer index, to traverse the array elements.
D.	Write a function that returns a pointer to the maximum value of an array of floating-point data:
double* maximum(double* a, int size)
If size is 0, return nullptr.
E.	Write a function that returns a pointer to the first occurrence of the character c in the string s, or nullptr if there is no match.
char* find(char s[], char c)
F.	Write a function that returns a pointer to the last occurrence of the character c in the string s, or nullptr if there is no match.
char* find_last(char s[], char c)
G.	Write a function that returns a pointer to the nth occurrence of the character c in the string s, or nullptr if there is no match.
char* find_last(char s[], char c, int n)
H.	Write a function that returns a pointer to the first occurrence of the substring t in the string s, or nullptr if there is no match.
char* find(char s[], char t[])
I.	Write a function that, given strings s, t, and u, returns a string (allocated with the new operator) in which all occurrences of t in s are replaced with u:
char* replace_all(const char s[], const char t[], const char u[])
J.	Write a function that reverses the values of an array of floating-point data:
void reverse(double* a, int size)
In the function, use two pointer variables, not integer indexes, to traverse the array elements.
