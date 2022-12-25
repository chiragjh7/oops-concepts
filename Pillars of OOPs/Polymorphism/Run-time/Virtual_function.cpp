#include <iostream>
using namespace std;

class Base{
    public:
        void print(){
            cout << "Base class function" << endl;
        }
};

class Derived: public Base{
    public:
        void print(){
            cout << "Derived class function" << endl;
        }
};

int main(){
    Derived d1;
    // pointer of base typ that points to derived1
    Base *b1 = &d1;
    
    b1->print();
    return 0;
}