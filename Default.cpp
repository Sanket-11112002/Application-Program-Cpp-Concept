#include<iostream>
using namespace std;

float Area(float Radius, float PI = 3.14f)
{
    float Ans = 0.0f;

    Ans = PI * Radius * Radius;

    return Ans;
}

int main()
{
    float R = 0.0f;
    float fRet = 0.0f;

    cout<<"Enter the radius : "<<"\n";
    cin>>R;

    fRet = Area(R);
    cout<<"Area of circle is : "<<fRet<<"\n";

    fRet = Area(R,7.10f);
    cout<<"Area of circle is : "<<fRet<<"\n";
    
    return 0;
}