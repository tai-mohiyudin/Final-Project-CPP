
#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    string sound;

public:
    void setName(string n) {
        name = n;
    }
    void setSound(string s) {
        sound = s;
    }

    string getName() {
        return name;
    }
    string getSound() {
        return sound;
    }

    void makeSound() {
        cout << name << " says: " << sound << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) {
        setName(n);
        setSound("Woof Woof");
    }
};

class Cat : public Animal {
public:
    Cat(string n) {
        setName(n);
        setSound("Meow Meow");
    }
};

int main() {
    Dog d("Tommy");
    Cat c("Kitty");

    cout << "----- Animal Sounds -----\n";
    d.makeSound();
    c.makeSound();

    return 0;
}