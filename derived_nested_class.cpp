// program for inherites the property of parents class

/*

#include<iostream>
using namespace std;

class person
{
private:
    long long mobileno;

public:
    string name;

    void setnumber(long long n)
    {
        mobileno=n;
    }

    void display()
    {
        cout<<"the mobile number is "<<mobileno<<endl;
        cout<<"name of the person is "<< name<<endl;
    }
};

class frd: public person
{
private:
    string gfname;

public :

    void setname(string s)
    {
        gfname=s;
    }

    void displaygf()
    {
        cout<<"the gf name of person is "<<gfname<<endl;
    }

};

int main()
{
    frd p;
    p.setnumber(8970031724);
    p.name="sudeep";
    p.display();

    //frd f;
    p.setname("Ramya");
    p.displaygf();

    return 0;
}

*/


// nested class example


/*

#include<iostream>
using namespace std;

class person
{
private:
    long long mobileno;

public:
    string name;

    void setnumber(long long n)
    {
        mobileno=n;
    }

    void display()
    {
        cout<<"the mobile number is "<<mobileno<<endl;
        cout<<"name of the person is "<< name<<endl;
    }

    class student
    {
    private:
        int roll;

    public:
        string sname;

        void setroll(int r)
        {
            roll=r;
        }

        void display()
        {
            cout<<"the name of the student is "<<sname<<endl;
            cout<<"the roll of the student is "<<roll<<endl;

        }

    };
};

int main ()
{
    person p;
    p.setnumber(8970031724);
    p.name="sudeep";
    cout<<"----person details-----"<<endl<<endl;
    p.display();


    person::student s;
    s.setroll(60);
    s.sname="prashant";
    cout<<"----student details-----"<<endl<<endl;
    s.display();

    return 0;
}

*/


// nested - inheritance total code

#include<iostream>
using namespace std;

class person
{
private:
    long long mobileno;

public:
    string name;

    void setnumber(long long n)
    {
        mobileno=n;
    }

    void display()
    {
        cout<<"the mobile number is "<<mobileno<<endl;
        cout<<"name of the person is "<< name<<endl;
    }

    class student
    {
    private:
        int roll;

    public:
        string sname;

        void setroll(int r)
        {
            roll=r;
        }

        void display()
        {
            cout<<"the name of the student is "<<sname<<endl;
            cout<<"the roll of the student is "<<roll<<endl;

        }

    };

};

class frd: public person
{
private:
    string gfname;

public :

    void setname(string s)
    {
        gfname=s;
    }

    void displaygf()
    {
        cout<<"the gf name of person is "<<gfname<<endl;
    }


};

int main()
{
    frd p;
    p.setnumber(8970031724);
    p.name="sudeep";
    p.display();

    //frd f;
    p.setname("Ramya");
    p.displaygf();

    person::student s;
    s.setroll(60);
    s.sname="prashant";
    cout<<"----student details-----"<<endl<<endl;
    s.display();

    return 0;
}

