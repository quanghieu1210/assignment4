#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    int yearModel;
    string make;
    int speed;
public:
    // Constructor
    Car(int y, string m) {
        yearModel = y;
        make = m;
        speed = 0;
    }
    // Accessor functions
    int getYearModel() {
        return yearModel;
    }
    string getMake() {
        return make;
    }
    int getSpeed() {
        return speed;
    }
    // Mutator functions
    void accelerate() {
        speed += 5;
    }
    void brake() {
        speed -= 5;
    }
};

int main() {
    // Create a Car object
    Car myCar(2018, "Toyota");

    // Accelerate 5 times and display current speed after each acceleration
    for (int i = 1; i <= 5; i++) {
        myCar.accelerate();
        cout << "Current speed after acceleration " << i << ": " << myCar.getSpeed() << endl;
    }

    // Brake 5 times and display current speed after each brake
    for (int i = 1; i <= 5; i++) {
        myCar.brake();
        cout << "Current speed after brake " << i << ": " << myCar.getSpeed() << endl;
    }

    return 0;
}
