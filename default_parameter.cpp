
// 1) default parameter passing
#include<iostream>
#include<string>
using namespace std;

void area(int l=5,int b=4)
{
    int a;
    a=l*b;
    cout<<"the area of the rectangle= "<<a<<endl;

}
int main()
{
    area();
    area(2,2);
    return 0;
}


