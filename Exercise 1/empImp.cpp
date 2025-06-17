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
        return firstName;
    }
    string employee::getLastName() const {
        return lastName;
    }
    int employee::getSalary() const {
        return salary;
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
    int employee::getYearlySalary(){
        return salary * 12;
    }