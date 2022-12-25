#include <iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;
        string address;
    public:
        Person(){
            name = "John";
            age = 20;
            address = "USA";
        }
        void display(){
            cout << "Name: " << name << endl;
        }
        void display(int age){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
        void display(int age, string address){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
        }
};

int main(){
    Person p1;
    p1.display();
    p1.display(19);
    p1.display(19, "India");
}