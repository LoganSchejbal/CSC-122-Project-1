#include <iostream>
#include <string>
using namespace std;


    
    
class Car {
        
    private:
        int year;
        string make;
        int speed;
        
    
public:
        Car (){
            year = 0;
            make = "";
            speed = 0;
            
        }
    
    void accelerate(){
        speed += 5;
    }
    
    
    void brake(){
        speed -= 5;
    }
    
    int getYear(){
        return year;
    }
    
    string getMake(){
        return make;
    }
    
    int getSpeed(){
        return speed;
    }
        
        
        
        
    };
