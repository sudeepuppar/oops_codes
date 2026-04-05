//assigning the strings and comparing
/*

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1, str2;

    // assign()
    str1.assign("Hello");
    cout << "After assign str1: " << str1 << endl;

    // append()
    str1.append(" World");
    cout << "After append str1: " << str1 << endl;

    // assign second string
    str2.assign("Hello World");
    cout << "str2: " << str2 << endl;

    // compare()
    if(str1.compare(str2) == 0)
        cout << "Both strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    return 0;
}

*/



//using string and print

/*

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b,c,d,e;

    a="sudeep";
    b="uppar";

    cout<<"the string1 is= "<<a<<endl;
    cout<<"the string2 is= "<<b<<endl;

    cout<<a+b<<endl;
    cout<<a.size()<<endl;

    cout<<a.length()<<endl;
    cout<<a[0]<<endl;
    a.append(" Govind");

    cout<<a<<endl;
    c="program";
    d="program";

    if(c==d)
    {
        cout<<"the strings are equal"<<endl;
    }
    else
        cout<<"not equal"<<endl;

        e.assign("from BGK");
        cout<<e<<endl;


 return 0;
}

*/


// use indexing the string

/*


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;

    a.assign("Sudeep G Uppar");
    cout<<a<<endl;

    b.assign("from BGK karnataka",9 ,9);
    cout<<b<<endl;

    cout<<a+" "+b;

}

*/

