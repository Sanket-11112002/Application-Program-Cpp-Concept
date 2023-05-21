#include<iostream>
using namespace std;

class base
{
    public :
        int i;
        float f;

        void fun()
        {
            cout<<"base fun";
        }
        virtual void gun()
        {
             cout<<"base gun";
        }
        
};
class derived : public base
{
    public:
        int i;
        double d;

        virtual void fun()
        {
             cout<<"derived fun"<<"\n";
        }
         void gun()
        {
             cout<<"derived gun"<<"\n";
        }
        virtual void sun()
        {
             cout<<"derived sun"<<"\n";
        }
};

int main()
{
    derived dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}
