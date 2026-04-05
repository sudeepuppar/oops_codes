#include<iostream>
#include<string>
using namespace std;

class oops
{
    public:
    int roll;
    private:
    string name;

    public:

    void get_name(string n)
    {
        name=n;
    }

    void display()
    {
        cout<<"name is = "<<name<<endl;
        cout<<"roll number is ="<<roll<<endl;
    }
};

int main()
{
    oops o1;
    o1.roll=60;
    o1.get_name("sudeep");
    o1.display();
    return 0;
}


