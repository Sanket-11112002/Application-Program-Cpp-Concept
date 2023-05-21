#include<iostream>
using namespace std;

bool CheckEven(int No)
{
    if((No % 2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    } 
}
int main()
{
    int Value = 0;
    bool bRet = false;
    cout<<"Enter number : \n";  // printf("Enter number\n");
    cin>>Value;                 // scanf("%d",&Value);

    bRet = CheckEven(Value);    // bRet = CheckEven(12);

    if(bRet == true)
    {
        cout<<"It is even number\n";
    }
    else
    {
        cout<<"It is odd number\n";
    }

    return 0;
}








int No = 11;
int &X = No;
int &A = No;

int *p = &
float Y = 90.90;
float &Z =