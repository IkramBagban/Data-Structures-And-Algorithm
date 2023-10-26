// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban

// ### Abstraction
// Abstraction is about simplifying complex reality by modeling classes based on the properties and behaviors an object should have. It is a way of hiding the implementation details and showing only the essential features of the object.
// hindi me sidha sidha bole to abstraction means attributes aur member function hide karna aur jitna zaruri ho utna hi public rakhna. 

// **Example**: Consider a car. When you see a car, you know it can move, you can steer it, or you can accelerate it. However, you don't need to know the complexity underneath, like how the transmission works, how the engine operates with spark plugs, etc. All these complex operations are abstracted away from the driver.
#include<iostream>
using namespace std;

class Car {
private:
    // Private attributes to represent internal state of the car.
    int fuel;
    int speed;
    bool engineState;

    // Private methods to represent internal workings of the car.
    void igniteEngine() {
        // Logic to ignite the engine
        engineState = true;
    }

public:
    // Constructor
    Car() : fuel(100), speed(0), engineState(false) {}

    // Public methods which abstract the complexity of car operations.
    void start() {
        igniteEngine();
        cout << "Car started." << endl;
    }

    void accelerate() {
        if(engineState) {
            // Simplified logic to accelerate the car
            speed += 10;
            fuel -= 5;
            cout << "Car accelerated. Speed: " << speed << " km/h." << endl;
        } else {
            cout << "Start the car first." << endl;
        }
    }

    void turnOff() {
        // Logic to turn off the car
        engineState = false;
        cout << "Car turned off." << endl;
    }
};

// In the above example, the complexities of how a car works (like igniting the engine) are hidden from the user. The user can simply use the `start`, `accelerate`, and `turnOff` methods without knowing the intricate details of their implementations.

int main(){
    Car bugatti;

    // Start the Bugatti car
    bugatti.start();

    // Accelerate the Bugatti car
    bugatti.accelerate();

    // Turn off the Bugatti car
    bugatti.turnOff();

    // Attempt to accelerate the Bugatti car after turning it off
    bugatti.accelerate(); // This will print "Start the car first."
    return 0;
}