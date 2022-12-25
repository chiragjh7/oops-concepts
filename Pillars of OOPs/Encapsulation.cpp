#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int roll_no;
        int age;
    public:
        void setName(string name){
            this->name = name;
        }
        void setRollNo(int roll_no){
            this->roll_no = roll_no;
        }
        string getName(){
            return this->name;
        }
        int getRollNo(){
            return this->roll_no;
        }
        void setAge(int age){
            this->age = age;
        }
        int getAge(){
            return this->age;
        }
};

int main(){
    Student s1;
    s1.setName("Rahul");
} 