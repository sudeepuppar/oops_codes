//  1)  Write a C++ program interaction with computer.
        //Displaying NAME,USN,DEPARTMENT,NATIVE
/*

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name,department,native;
    string usn;

    cout<<"enter the name :"<<endl;
    cin>>name;

    cout<<"enter the usn :"<<endl;
    cin>>usn;

    cout<<"enter the department :"<<endl;
    cin>>department;

    cout<<"enter the native :"<<endl;
    cin>>native;

    // displaying the outputs

    cout<<"name ="<<name<<endl;
    cout<<"usn ="<<usn<<endl;
    cout<<"department ="<<department<<endl;
    cout<<"native ="<<native<<endl;

    return 0;

}

*/

// 3) Describe various types of functions
// (Inline functions, Friend functions,Constructors, Destructors) in a class

/*

#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    // Constructor
    Student() {
        marks = 60;
        cout << "Constructor called\n";
    }

    // Inline function
    inline void display() {
        cout << "Marks = " << marks << endl;
    }

    // Friend function
    friend void show(Student s);

    // Destructor
    ~Student() {
        cout << "Destructor called\n";
    }
};

// Friend function definition
void show(Student s) {
    cout << "Accessing marks using friend function: " << s.marks << endl;
}

int main() {
    Student s;

    s.display();   // inline function
    show(s);       // friend function

    return 0;
}


*/

// 4) Write a program to create a class for Student with data members
// usn, name and grade of the student. Include member functions for setting andaccessing private values. Also include a member function that
//receives student arguments and exchanges its content.
/*


#include <iostream>
using namespace std;

class Student {
private:
    int usn;
    string name;
    char grade;

public:
    // Function to set values
    void setData(int u, string n, char g) {
        usn = u;
        name = n;
        grade = g;
    }

    // Function to display values
    void getData() {
        cout << "USN: " << usn << endl;
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }

    // Function to exchange data of two students
    void swapData(Student &s) {
        Student temp;

        temp.usn = usn;
        temp.name = name;
        temp.grade = grade;

        usn = s.usn;
        name = s.name;
        grade = s.grade;

        s.usn = temp.usn;
        s.name = temp.name;
        s.grade = temp.grade;
    }
};

int main() {
    Student s1, s2;

    s1.setData(101, "Rahul", 'A');
    s2.setData(102, "Anu", 'B');

    cout << "Before Swapping:\n";
    s1.getData();
    s2.getData();

    // Swap data
    s1.swapData(s2);

    cout << "\nAfter Swapping:\n";
    s1.getData();
    s2.getData();

    return 0;
}

*/

// 3b) Write a C++ programs to create an array of 10 numbers and sort the array in ascending order.

/*

#include <iostream>
using namespace std;

int main() {
    int arr[10], i, j, temp;

    // Input 10 numbers
    cout << "Enter 10 numbers:\n";
    for(i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Sorting (Ascending Order)
    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display sorted array
    cout << "\nSorted array:\n";
    for(i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

*/

// 3c) Implement a base class Person. Derive classes Student and Instructor from Person.
// A person has a name and a birthday. A student has a major,and an instructor has a salary. Write the class definitions, the constructors,and the member functions print()
//for all classes

/*

#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    string birthday;

public:
    // Constructor
    Person(string n, string b) {
        name = n;
        birthday = b;
    }

    // Print function
    void print() {
        cout << "Name: " << name << endl;
        cout << "Birthday: " << birthday << endl;
    }
};

// Derived Class: Student
class Student : public Person {
private:
    string major;

public:
    // Constructor
    Student(string n, string b, string m) : Person(n, b) {
        major = m;
    }

    // Print function
    void print() {
        Person::print();
        cout << "Major: " << major << endl;
    }
};

// Derived Class: Instructor
class Instructor : public Person {
private:
    float salary;

public:
    // Constructor
    Instructor(string n, string b, float s) : Person(n, b) {
        salary = s;
    }

    // Print function
    void print() {
        Person::print();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s("Rahul", "01-01-2000", "CSE");
    Instructor i("Dr. Kumar", "05-05-1980", 50000);

    cout << "Student Details:\n";
    s.print();

    cout << "\nInstructor Details:\n";
    i.print();

    return 0;
}


*/


// default arguments

/*

#include <iostream>
using namespace std;

void area_r(int l=10,int b=2)
{
    int area;
    area=l*b;
    cout<<"the area of rectangle = "<<area<<endl;
}

int main()
{
    area_r();
    area_r(2,2);
    return 0;
}


*/


// Write a program to create a class for the stack and include member functions
// for push, pop and delete operations. Demonstrate working of
//these functions by calling them in the main function.


#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int arr[5];  // fixed size stack

public:
    Stack() {
        top = -1;
    }

    // Push operation
    void push(int value) {
        if (top == 4) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop." << endl;
        } else {
            cout << arr[top] << " popped from stack." << endl;
            top--;
        }
    }

    // Delete operation (clear entire stack)
    void clear() {
        if (top == -1) {
            cout << "Stack is already empty." << endl;
        } else {
            top = -1;
            cout << "Stack cleared (all elements deleted)." << endl;
        }
    }

    // Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    // Demonstrating push
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    // Demonstrating pop
    s.pop();
    s.display();

    // Demonstrating delete (clear)
    s.clear();
    s.display();

    return 0;
}
