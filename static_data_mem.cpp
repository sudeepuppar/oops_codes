//write c++ program to implement static variable count and display
// the results after implementing for 3 objects

#include<iostream>
using namespace std;

class demo
{

    //public:
static int count;
public:
    void getcount()
    {
        cout<<"count="<<++count<<endl;

    }
};

 int demo::count;
int main()
{
    demo d1,d2,d3;
    d1.getcount();
    d2.getcount();
    d3.getcount();
    return 0;
}



