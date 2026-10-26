#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    // Parameterized Constructor
    Person(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }

    // Getters
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getAddress() {
        return address;
    }

    // Setters
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    void setAddress(string addr) {
        address = addr;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of persons: ";
    cin >> n;

    Person* persons[10];   // max 10 for simplicity

    for(int i = 0; i < n; i++) {
        string name, address;
        int age;

        cout << "\nEnter details of Person " << i+1 << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cout << "Address: ";
        cin.ignore();
        getline(cin, address);

        persons[i] = new Person(name, age, address);
    }

    cout << "\n----- Person Details -----\n";
    for(int i = 0; i < n; i++) {
        persons[i]->display();
    }

    // free memory
    for(int i = 0; i < n; i++) {
        delete persons[i];
    }

    return 0;
}