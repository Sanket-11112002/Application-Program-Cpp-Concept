#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;

        Demo()
        {
            cout<<"Inside default constructor"<<"\n";
        }
        Demo(int i, int j)
        {
            cout<<"Inside parametrised constructor"<<"\n";
        }
        ~Demo()
        {
            cout<<"Inside destructor"<<"\n";
        }
};

int main()
{   
    cout<<"Inside main"<<"\n";

    Demo obj1;                       // Static memory allocation of object
    Demo obj2(11,21);               // Static memory allocation of object

    Demo *p = new Demo();           // Dynamic memory allocation of object
    Demo *q = new Demo(11,21);       // Dynamic memory allocation of object

    delete p;
    delete q;

    cout<<"End of main"<<"\n";

    return 0;
}