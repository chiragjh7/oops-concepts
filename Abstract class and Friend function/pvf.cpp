#include <iostream>
using namespace std;

class A{
    public:
    virtual void display() = 0;
};

class B: public A{
    public:
    void display(){
        cout << "B class function" << endl;
    }
};

int main(){
    B b1;
    A *a1 = &b1;
    a1->display();
    return 0;
}