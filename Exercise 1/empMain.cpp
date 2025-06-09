#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

// Main function to test the employee class
int main() {
    // Create an employee object
    string firstName, lastName;
    int salary;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter salary: ";
    cin >> salary;
    employee emp(firstName, lastName, salary);

    // Display employee details
    