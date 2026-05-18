#include <iostream>
#include <string>

using namespace std;


class Media {
protected:
    string title;
    bool isBorrowed;

public:
    Media(string t) {
        title = t;
        isBorrowed = false;
    }

    void borrowMedia() {
        if (isBorrowed == false) {
            isBorrowed = true;
            cout << title << " has been borrowed." << endl;
        } else {
            cout << title << " is already borrowed." << endl;
        }
    }

    void returnMedia() {
        if (isBorrowed == true) {
            isBorrowed = false;
            cout << title << " has been returned." << endl;
        } else {
            cout << title << " was not borrowed in the first place." << endl;
        }
    }

    virtual void displayInfo() {
        cout << "Title: " << title << " | Borrowed: ";
        if (isBorrowed) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    }
};

// Specific attribute classes
class BookAttributes {
protected:
    string author;
public:
    BookAttributes(string a) {
        author = a;
    }
};

class MagazineAttributes {
protected:
    int issueNumber;
public:
    MagazineAttributes(int i) {
        issueNumber = i;
    }
};

class DVDAttributes {
protected:
    string director;
public:
    DVDAttributes(string d) {
        director = d;
    }
};


class Book : public Media, public BookAttributes {
public:
    Book(string t, string a) : Media(t), BookAttributes(a) {}

    void displayInfo() {
        Media::displayInfo();
        cout << " Author: " << author << endl;
    }
};

class Magazine : public Media, public MagazineAttributes {
public:
    Magazine(string t, int i) : Media(t), MagazineAttributes(i) {}

    void displayInfo() {
        Media::displayInfo();
        cout << " Issue Number: " << issueNumber << endl;
    }
};

class DVD : public Media, public DVDAttributes {
public:
    DVD(string t, string d) : Media(t), DVDAttributes(d) {}

    void displayInfo() {
        Media::displayInfo();
        cout << " Director: " << director << endl;
    }
};

int main() {
    Book book1("1984", "George Orwell");
    Magazine mag1("Time", 52);
    DVD dvd1("Inception", "Christopher Nolan");

    
    cout << "Library Inventory" << endl;
    book1.displayInfo();
    mag1.displayInfo();
    dvd1.displayInfo();

    
    cout << "Borrowing Media" << endl;
    book1.borrowMedia();
    dvd1.borrowMedia();
    

    book1.borrowMedia();

 
    cout << "Updated Inventory" << endl;
    book1.displayInfo();
    mag1.displayInfo();
    dvd1.displayInfo();

 
    cout << "Returning Media" << endl;
    book1.returnMedia();
    book1.displayInfo();

    return 0;
}
