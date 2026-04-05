
//1] string input and output
/*

#include<iostream>
using namespace std;
int main()
{
   string a;
   string b;

   cout<<"enter the string"<<endl;
   cin>>a;

   cout<<"the string is= "<<a;

   return 0;

}

*/

//


/*
#include<iostream>
using namespace std;
int main()
{
   string a;
   string b,c,res;

   cout<<"enter the strings of a and b and c"<<endl;
   cin>>a;
   cin>>b;
   cin>>c;

    res=a+b;
   cout<<"the string is="<< res<<endl;

   res=res+c+"from BGk";
   cout<<"final = "<<res<<endl;

   return 0;
}

*/



//compare two string

/*
#include<iostream>
using namespace std;
int main()
{
   string a;
   string b;

   cout<<"enter the strings of a and b"<<endl;
   cin>>a;
   cin>>b;

   if (a==b)

     cout<<"string are equal"<<endl;


     else if(a>b)
    cout<<"a is before";


      else if(b>a)
    cout<<"b is before";




   return 0;
}
*/

// using assign object

/*

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;

    // assigning C-style string
    str.assign("hello, world");
    cout << str << endl;

    // substring assignment (from position 7, length 8)
    str.assign("hello, Universe", 7, 8);
    cout << str << endl;

    // assigning from another string
    string other = "c++ programming";
    str.assign(other);
    cout << str << endl;

    // assigning part of another string
    str.assign(other, 4, 11);
    cout << str << endl;

    return 0;
}

*/



   // write c++ program using function to add two numbers and display the results

   /*

 #include<iostream>
using namespace std;

int a,b;

void add (int a, int b)
{
    cout<<"addition= "<<a+b<<endl;
}

void sub(int a, int b)
{
    cout<<"subtraction ="<<a-b;
}

int main()
{
    a=10;
    b=20;
add(a,b);
sub(a,b);

return 0;

}

*/


// using inline functions

/*

#include<iostream>
using namespace std;

int a,b;

inline void add (int a, int b)
{
    cout<<"addition= "<<a+b<<endl;
}

inline void sub(int a, int b)
{
    cout<<"subtraction ="<<a-b;
}

int main()
{
    a=10;
    b=20;
add(a,b);
sub(a,b);

return 0;

}

*/




