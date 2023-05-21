#include<iostream>
using namespace std;

class Base
{
    public :
        int i;
        float f;

        virtual void gun() = 0;
        virtual void sun() = 0;
        virtual void run()           // 1000
        {
            cout<<"Base run";
        }
};

class Derived : public Base
{
    public :
        int i;
        double d;

        void sun()                 // 2000
        {
            cout<<"Derived sun";
        }
        void fun()                // 3000
        {
            cout<<"Derived fun";
        }
        void gun()               // 4000
        {
            cout<<"Derived gun";
        }
        virtual void mun()       // 5000
        {
            cout<<"Derived mun";
        }
};

int main()
{
    Base *bp = NULL;
    Derived dobj;

    bp = &dobj;

    //bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    //bp->mun();

    return 0;
}