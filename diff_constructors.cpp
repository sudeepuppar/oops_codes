//write a cpp program to create objects with a help of default , parametrized and copy constructor

/*

#include<iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    // Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    // Function to display data
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    // Default constructor
    Student s1;
    s1.display();

    cout << endl;

    // Parameterized constructor
    Student s2(101, "Rahul");
    s2.display();

    cout << endl;

    // Copy constructor
    Student s3 = s2;
    s3.display();

    return 0;
}


*/

// remove default constructor

#include<iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Default Constructor


    // Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    // Function to display data
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    // Default constructor

    // Parameterized constructor
    Student s2(101, "Rahul");
    s2.display();

    cout << endl;

    // Copy constructor
    Student s3 = s2;
    s3.display();

    return 0;
}



