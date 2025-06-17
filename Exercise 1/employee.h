#pragma once
#include <string>
#include <iostream>
using namespace std;

class employee {
    private:
    string firstName;
    string lastName;
    int salary;

    public:
    employee(string, string, int);
    string getFirstName() const;
    string getLastName() const;
    int getSalary() const;
    void setFirstName(string);
    void setLastName(string);
    void setSalary(int);
    int getYearlySalary();
};