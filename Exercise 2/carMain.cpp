#include <iostream>
#include <string>
using namespace std;
#include "carlmp.cpp"

int main(){
    
    
    Car car(2025, "BMW");
    
    
    cout << "Make: " << car.getMake() << endl;
    cout << "Year: " << car.getYear() << endl;
    
    
    cout << "Car accelerating" << endl;
    
    for (int i = 0; i < 5; i++) {
        car.accelerate();
        cout << "Speed: " << car.getSpeed() << endl;
    }
    
    cout << "* Car is now braking *" << endl;
    for (int i = 0; i < 5; i++) {
        car.brake();
        cout << "Braking: " << car.getSpeed() << endl;
    }
}
