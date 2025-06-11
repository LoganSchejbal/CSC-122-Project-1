#include <iostream>
#include <string>
using namespace std;


    
    
class Car {
        
    private:
        int year;
        string make;
        int speed;
        
public:
    Car(int y, string m); // Constructor
    
    void accelerate();
    void brake();
    int getYear();
    string getMake();
    int getSpeed();

        
        
    };


