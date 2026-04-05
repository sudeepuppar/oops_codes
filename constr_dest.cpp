#include<iostream>
using namespace std;
#include<string>

class car
{
    public:
        car()
        {
            cout<<"constructor is called"<<endl;

        }

        ~car()
        {
            cout<<"destructor is called"<<endl;

        }

};

int main()
{
    car c1;
    cout<<"inside the main function"<<endl;
    return 0;
}
