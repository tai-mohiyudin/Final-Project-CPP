#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    string sound;

public:
    Animal(string n, string s) {
        name = n;
        sound = s;
    }

    virtual void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Sound: " << sound << endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n, "Woof Woof") {}

    void displayDetails() {
        cout << "----- Dog Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Sound: " << sound << endl;
        cout << "Type: Dog" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string n) : Animal(n, "Meow Meow") {}

    void displayDetails() {
        cout << "----- Cat Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Sound: " << sound << endl;
        cout << "Type: Cat" << endl;
    }
};

int main() {
    Animal* animals[3];

    animals[0] = new Dog("Tommy");
    animals[1] = new Cat("Kitty");
    animals[2] = new Dog("Bruno");

    cout << "\n----- Demonstrating Polymorphism -----\n";
    for(int i = 0; i < 3; i++) {
        animals[i]->displayDetails();
        cout << endl;
    }

    // free memory
    for(int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}