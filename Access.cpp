#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;

    public:
        Base()
        {
            A = 10;
            B = 20;
            C = 30;
        }
};
class Derived : public Base
{
    public:
        int X;
        void Display()
        {
            cout<<A<<"\n";  // A
            cout<<B<<"\n";  // NA
            cout<<C<<"\n";  // A                    
        }
};

int main()
{   
    Derived dobj;

    cout<<dobj.A<<"\n";     // A
    cout<<dobj.B<<"\n";     // NA
    cout<<dobj.C<<"\n";     // NA
    cout<<dobj.X<<"\n";     // A

    dobj.Display();

}