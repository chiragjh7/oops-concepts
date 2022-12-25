#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
    public:
        Rectangle(){
            length = 10;
        }
        int printLength(Rectangle);
};

int printLength(Rectangle r){
    r.length = 20;
    return r.length;
}

int main(){
    Rectangle b;
    cout << "Length of Rectangle: " << printLength(b) << endl;
}