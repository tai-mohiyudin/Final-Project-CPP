#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publishedYear;

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Published Year: " << publishedYear << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Book books[3];

    // Taking input
    for(int i = 0; i < 3; i++) {
        cout << "Enter details of Book " << i+1 << endl;
        cout << "Title: ";
        cin.ignore();
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Published Year: ";
        cin >> books[i].publishedYear;
        cout << endl;
    }

    // Displaying
    cout << "\n----- Book Details -----\n";
    for(int i = 0; i < 3; i++) {
        books[i].display();
    }

    return 0;
}