#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    Hero()
    {
        cout << "Simple Constructor called" << endl;
        name = new char[100];
    }

    // Parameterized Constructor
    Hero(int health)
    {
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // Copy Constructor
    // Hero(Hero &h)
    // {
    //     cout << "Copy Constructor called" << endl;
    //     this->health = h.health;
    //     this->level = h.level;
    // }
    void print()
    {
        cout << endl;
        cout << "[Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << "]\n";
        cout << endl;
    }
    int getHealth()
    {
        return this->health;
    }
    char getLevel()
    {
        return this->level;
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    void setLevel(char level)
    {
        this->level = level;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    Hero h1;
    h1.setHealth(20);
    h1.setLevel('A');
    char name[7] = "Chirag";
    h1.setName(name);
    h1.print();

    // use Default Copy constructor
    Hero h2(h1);
    h2.print();

    h1.name[0] = 'F';
    h1.print();
    h2.print();
}
