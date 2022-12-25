#include <iostream>
using namespace std;

class Vehicle{
    public:
        void makeSound(){
            cout << "Vehicle is making sound" << endl;
        }
};

class Car: public Vehicle{
    public:
        void makeSound(){
            cout << "Car is making sound" << endl;
        }
};

class Truck: public Vehicle{
    public:
        void makeSound(){
            cout << "Truck is making sound" << endl;
        }
};

int main(){
    Vehicle v1;
    v1.makeSound();
    Car c1;
    c1.makeSound();
    Truck t1;
    t1.makeSound();
}