#include <iostream>
using namespace std;

class Mobile{
    string model;
    int year_of_manufactured;
    public:
        void set_Details(string model, int year_of_manufactured){
            this->model = model;
            this->year_of_manufactured = year_of_manufactured;
        }
        void print(){
            cout << this->model << endl;
            cout << this->year_of_manufactured << endl;
        }
};

int main(){
    Mobile samsung;
    samsung.set_Details("Note 10", 2021);
    samsung.print();
}