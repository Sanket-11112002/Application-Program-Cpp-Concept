#include<iostream>
using namespace std;

class base1
{
    public :
        int i;
        float f;

        void gun()
        {

        }

};
class base2
{
    public :
        int i;
        float g;

        void fun()
        {
            cout<<"Inside Base2";
        }

};
class derived : public base1,base2
{
    public : 
        int i;
        double d;

        void sun()
        {

        }
        void fun()
        {
            cout<<"Inside Derived";
        }
};

int main()
{
    derived dobj;

    cout<<sizeof(dobj)<<"\n";
    dobj.fun();
    return 0;
}