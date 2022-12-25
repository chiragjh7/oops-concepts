#include <iostream>
using namespace std;

// private protected public

class Smartphone{
    
    private:
    string model;
    int year_of_manufacture;
    bool _5g_support;

    public:
    // Constructor
    Smartphone(string mod, int yom, bool _5g_supp){
        model = mod;
        year_of_manufacture = yom;
        _5g_support = _5g_supp;
    }
    void print(){
        cout << "Model: " << model << endl;
        cout << "Year of Manufacture: " << year_of_manufacture << endl;
    }
};

int main(){
    Smartphone s1;
    s1.print();
    return 0;
}
