#include<iostream>
using namespace std;

class Demo
{
    public:
        void Fun()                      // 1000 from text section
        {
            cout<<"Inside Fun"<<"\n";
        }
        void Gun()                      // 2000 from text section
        {
            cout<<"Inside Gun"<<"\n";
        }
};

int main()
{
    Demo obj;

    cout<<sizeof(obj)<<"\n";   

    obj.Fun();  // CALL 1000        CALL ______
    obj.Gun();  // CALL 2000

    return 0;
}