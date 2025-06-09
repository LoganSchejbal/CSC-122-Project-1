#include <iostream>
#include <string>
#include "employee.h" 
using namespace std;

// Implementation of the employee class methods
    employee::employee(string first, string last, int money){
        firstName = first;
        lastName = last;
        salary = money;
    }
    string employee::getFirstName() const{
        cout << "First Name: " << firstName << endl;
    }
    string employee::getLastName() const {
        cout << "Last Name: " << lastName << endl;
    }
    int employee::getSalary() const {
        cout << "Salary: " << salary << endl;
    }
    void employee::setFirstName(string name){
        name = firstName;
    }
    void employee::setLastName(string name){
        name = lastName;
    }
    void employee::setSalary(int money){
        money = salary;
    }