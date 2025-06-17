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
    cout << "\nEnter last name: ";
    cin >> lastName;
    cout << "\nEnter monthly salary: ";
    cin >> salary;
    if (salary < 0){
        salary = 0;
    }
    else{
    }
    employee emp(firstName, lastName, salary);

    // Display employee details
    cout << "\n" << emp.getFirstName() << " " <<emp.getLastName() << "'s yearly salary before the raise was $" << emp.getYearlySalary() << "\n" <<endl;
    cout << emp.getFirstName() << " " << emp.getLastName() << "'s yearly salary after the raise was $" << emp.getYearlySalary() * 1.1 << "\n" <<endl;
    return 0;    
}