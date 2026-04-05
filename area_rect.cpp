
// area of rectangle using public

/*
#include<iostream>
using namespace std;
#include<string>

class Rectangle
{
public:
    int length;
    int width;


    void display()
    {
        cout<<"area of the rectangle= "<<length*width;
    }

};

int main()
{
    Rectangle R1;
    R1.length=10;
    R1.width=10;

    R1.display();

}

*/

// declare the variables as private


/*

#include<iostream>
using namespace std;
#include<string>

class Rectangle
{
private:
    int length;
    int width;

public:
    void setValues(int l, int w)
    {
        length = l;
        width = w;
    }

    void display()
    {
        cout << "area of the rectangle = " << length * width;
    }
};

int main()
{
    Rectangle R1;

    R1.setValues(10, 10);   // setting values using public function
    R1.display();

    return 0;
}

*/


//Write a C++ program to create a class Car with data members brand
//and speed. Create two objects and display the details of both cars using a member function.

#include<iostream>
#include<string>
using namespace std;

class car
{
public:

    string brand;
    int speed;

    void display()
    {
        cout<<"the car brand is = "<<brand<<endl;
        cout<<"the car speed is = "<<speed<<endl;
    }
};
int main()
{
    car c1,c2;
    c1.brand="Toyota";
    c1.speed=120;
    c2.brand="Baleno";
    c2.speed=90;
    c1.display();
    c2.display();
    return 0;
}
