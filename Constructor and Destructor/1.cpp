#include <iostream>
using namespace std;

class smartphone{
    private:
        string model;
        int year_of_manufacture;
        bool _5g_support;
    public:
        // Default Constructor 
        smartphone(){
            model = "unknown";
            year_of_manufacture = 1999;
            _5g_support = false;
        }
        // Parameterized Constructor
        smartphone(string mod, int yom, bool _5g_supp){
            model = mod;
            year_of_manufacture = yom;
            _5g_support = _5g_supp;
        }
        // Copy Constructor
        smartphone(smartphone &obj){
            model = obj.model;
            year_of_manufacture = obj.year_of_manufacture;
            _5g_support = obj._5g_support;
        }
        void display(){
            cout << "Model: " << model << endl;
            cout << "Year of Manufacture: " << year_of_manufacture << endl;
            cout << "5G Support: " << _5g_support << endl;
        }
};

int main(){
    smartphone s1("Samsung Galaxy S21", 2021, true);
    smartphone s2(s1);
    s1.display();
}