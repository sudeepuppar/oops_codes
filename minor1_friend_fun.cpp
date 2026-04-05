#include<iostream>
using namespace  std;

class number
    {
    private:
        int a,b;

    public:
        void setnum(int n1,int n2)
        {
            a=n1;
            b=n2;
        }

    friend int sum(number n);

    };
    int sum(number n)
    {
       int s;
       s=n.a+n.b;

       cout<<"the sum is "<<s<<endl;

    }
    int main()
    {
     number n1;
    n1.setnum(2,2);
    sum(n1);
    return 0;
    }
