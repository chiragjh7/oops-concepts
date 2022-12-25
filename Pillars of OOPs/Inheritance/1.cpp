#include <iostream>
using namespace std;

class Vehicle{
    public:
        string color;
        int max_speed;
};

class Car: public Vehicle{
    int num_gears;
};

class Bicycle: public Vehicle{
    bool is_foldable;
};

class Truck: public: Vehicle{
    int num_tyres;
};