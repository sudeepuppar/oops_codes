// write a c++ program to pass  a object as argument  to the function and add two objects
//write the member function s as inline
/*

#include<iostream>
using namespace std;

class time
{
    int hour, minute,second;
public:
    void gettime()
    {
        cout<<"enter the hours: ";cin>>hour;
        cout<<"enter the minutes: ";cin>>minute;
        cout<<"enter the seconds: ";cin>>second;
    }

    void printtime()
    {
        cout<<"hours :"<<hour<<endl;
        cout<<"minutes :"<<minute<<endl;
        cout<<"seconds :"<<second<<endl;
    }

    void addtime(time x,time y)
    {
        hour=x.hour+y.hour;
        minute=x.minute+y.minute;
        second=x.second +y.second;
    }
};

int main()
{
    time t1,t2,t3;

    t1.gettime();
    t1.printtime();

    t2.gettime();
    t2.printtime();

    t3.addtime(t1,t2);
    t3.printtime();
    return 0;
}
*/

// chat gpt code

/*

#include<iostream>
using namespace std;

class time
{
    int hour, minute, second;

public:
    void gettime()
    {
        cout << "Enter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;
    }

    void printtime()
    {
        cout << "Time = " << hour << " : " << minute << " : " << second << endl;
    }

    // Passing objects as arguments
    void addtime(time x, time y)
    {
        second = x.second + y.second;
        minute = x.minute + y.minute + (second / 60);
        hour = x.hour + y.hour + (minute / 60);

        second = second % 60;
        minute = minute % 60;
    }
};

int main()
{
    time t1, t2, t3;

    cout << "Enter Time 1:\n";
    t1.gettime();

    cout << "Enter Time 2:\n";
    t2.gettime();

    // Adding two objects
    t3.addtime(t1, t2);

    cout << "Resultant Time:\n";
    t3.printtime();

    return 0;
}

*/


// write the above code using  inline and  this

/*

#include<iostream>
using namespace std;

class time
{
    int hour, minute, second;

public:
    void gettime()
    {
        cin >> hour >> minute >> second;
    }

    void printtime()
    {
        cout << "Time = " << hour << " : " << minute << " : " << second << endl;
    }

    // Inline function
    inline void addtime(time x, time y)
    {
        this->second = x.second + y.second;
        this->minute = x.minute + y.minute + (this->second / 60);
        this->hour   = x.hour + y.hour + (this->minute / 60);

        this->second %= 60;
        this->minute %= 60;
    }
};

int main()
{
    time t1, t2, t3;

    cout << "Enter Time 1: ";
    t1.gettime();

    cout << "Enter Time 2: ";
    t2.gettime();

    t3.addtime(t1, t2);

    cout << "Resultant Time:\n";
    t3.printtime();

    return 0;
}

*/


//C++ Program (Inline Function + Return Object + this->)

#include<iostream>
using namespace std;

class time
{
    int hour, minute, second;

public:
    void gettime()
    {
        cin >> hour >> minute >> second;
    }

    void printtime()
    {
        cout << "Time = " << hour << " : " << minute << " : " << second << endl;
    }

    // Inline function with return type
    inline time addtime(time t)
    {
        time temp;

        temp.second = this->second + t.second;
        temp.minute = this->minute + t.minute + (temp.second / 60);
        temp.hour   = this->hour + t.hour + (temp.minute / 60);

        temp.second %= 60;
        temp.minute %= 60;

        return temp;
    }
};

int main()
{
    time t1, t2, t3;

    cout << "Enter Time 1: "<<endl;
    t1.gettime();

    cout << "Enter Time 2: "<<endl;
    t2.gettime();

    // Calling inline function
    t3 = t1.addtime(t2);

    cout << "Resultant Time:\n";
    t3.printtime();

    return 0;
}



