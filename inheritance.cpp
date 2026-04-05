// inheritance
// without using the scope resolution

/*

#include<iostream>
using namespace std;
#include<string>

class vehicle
{
    public:
    int speed;
    void showspeed()
    {
        cout<<"the speed of the car = "<<speed<<endl;

    }
};

class car : public vehicle
{
public:
    string brand;
};

int main()
{
    car c1;
    c1.speed=90;
    c1.brand="Toyota";

    cout<<"Brand= "<<c1.brand<<endl;
    c1.showspeed();

    return 0;
}

*/

// using the scope resolution

// inheritance

/*

#include<iostream>
using namespace std;
#include<string>

class vehicle
{
    public:
    int speed;
    void showspeed();

};
void vehicle::showspeed()
    {
        cout<<"the speed of the car = "<<speed<<endl;

    }

class car : public vehicle
{
public:
    string brand;
};

int main()
{
    car c1;
    c1.speed=90;
    c1.brand="Toyota";

    cout<<"Brand= "<<c1.brand<<endl;
    c1.showspeed();

    return 0;
}

*/
// accessing the private variable using set and get functions

/*

#include<iostream>
using namespace std;
#include<string>

class base
{
private:

    int x;

public:
    void setdata(int a)
    {
        x=a;
    }
    int getdata()
    {
        return x;
    }

};

class derived :public base
{
   public:
       void display()
       {
           cout<<"value = "<<getdata()<<endl;
       }
};

int main()
{
derived b1;
b1.setdata(20);
b1.display();
return 0;
}

*/

// accessing the private variable

/*

#include<iostream>
using namespace std;
#include<string>

class base
{
private:

    int x;

public:
    void setdata(int a)
    {
        x=a;
    }

    void display()
    {
        cout<<"the value = "<<x<<endl;
    }

};


int main()
{
base b1;
b1.setdata(20);
b1.display();
return 0;
}

*/


// accessing the private variable decalre in the base class by using the
// protected access specifier

/*

#include<iostream>
using namespace std;
#include<string>

class base
{
protected:

    int x;
};

class derived :public base
{
   public:
       void setdata()
       {
           x=17;
       }
       void display()
       {
           cout<<"value = "<<x<<endl;
       }
};

int main()
{
derived d1;
d1.setdata();
d1.display();
return 0;
}

*/

// using both private and protected variables

/*

#include<iostream>
using namespace std;
#include<string>

class student
{
private:
    float cgpa;

protected:
    int id;

public:
    void setid(int a)
    {
        id=a;
    }
};

class TA: public student
{
    public:
    void display()
    {
        cout<<"the id is = "<<id<<endl;
    }
};

int main()
{
    TA t1;
    t1.setid(17);
    t1.display();
    return 0;
}

*/

// accessing the private variable

/*

#include<iostream>
using namespace std;
#include<string>

class student
{
private:
    float cgpa;

protected:
    int id;

public:
    void setid(int a)
    {
        id=a;
    }
    void setcgpa(float b)
    {
        cgpa=b;
    }
    float getcgpa()
    {
        return cgpa;
    }
};


class TA: public student
{
    public:
    void display()
    {
        cout<<"the id is = "<<id<<endl;

    }
};

int main()
{
    TA t1;
    student s1;
    t1.setid(17);
    s1.setcgpa(8.44);
    t1.display();
    cout<<"the cgpa is = "<<s1.getcgpa()<<endl;

    return 0;
}

*/

