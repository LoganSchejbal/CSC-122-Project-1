#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "carlmp.cpp"

int main() {
   
    string path = "/Users/josephmirza/Desktop/results.txt"; // Change josephmirza to your computer's name, I am using Mac
    ofstream outFile(path);
    
    if (!outFile) {
        cerr << "Failed: " << path << endl;
        return 1;
    }

    Car car(2025, "BMW");

    outFile << "Make: " << car.getMake() << endl;
    outFile << "Year: " << car.getYear() << endl;

    outFile << "Car accelerating" << endl;
    for (int i = 0; i < 5; i++) {
        car.accelerate();
        outFile << "Speed: " << car.getSpeed() << endl;
    }

    outFile << "* Car is now braking *" << endl;
    for (int i = 0; i < 5; i++) {
        car.brake();
        outFile << "Braking: " << car.getSpeed() << endl;
    }

    outFile.close();
    return 0;
}
