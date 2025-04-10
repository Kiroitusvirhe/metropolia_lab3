#include <iostream>
#include <string>
using namespace std;

// 4.1 Vehicle base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}
    virtual void showInfo() {
        cout << "Brand: " << brand << "\nYear: " << year << endl;
    }
    virtual void startEngine() {
        cout << "Starting engine of Vehicle" << endl;
    }
    virtual ~Vehicle() {}
};

// 4.2 Car derived class
class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(string b, int y, int doors) : Vehicle(b, y), numDoors(doors) {}
    void showInfo() override {
        Vehicle::showInfo();
        cout << "Number of doors: " << numDoors << endl;
    }
    void startEngine() override {
        cout << "Car engine is starting!" << endl;
    }
};

// 4.3 ElectricCar derived class - REMOVED DEFAULT CONSTRUCTOR
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    // Only keep the parameterized constructor
    ElectricCar(string b, int y, int doors, int battery) 
        : Car(b, y, doors), batteryCapacity(battery) {}
    
    void showInfo() override {
        Car::showInfo();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
    void startEngine() override {
        cout << "Electric engine is starting... but what if you need to go to lapland?" << endl;
    }
};

int main() {
    // 1. Vehicle object
    Vehicle* vehicle = new Vehicle("Generic", 2015);
    vehicle->showInfo();
    vehicle->startEngine();
    delete vehicle;
    cout << endl;

    // 2. Car object
    Car* car = new Car("Saab", 2021, 4);
    car->showInfo();
    car->startEngine();
    delete car;
    cout << endl;

    // 3. ElectricCar objects
    ElectricCar* tesla = new ElectricCar("Tesla", 2023, 4, 75);
    tesla->showInfo();
    tesla->startEngine();
    delete tesla;
    cout << endl;

    ElectricCar* nissan = new ElectricCar("Nissan", 2022, 4, 40);
    nissan->showInfo();
    nissan->startEngine();
    delete nissan;

    return 0;
}