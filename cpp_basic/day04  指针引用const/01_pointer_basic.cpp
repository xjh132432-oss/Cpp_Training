#include<iostream>
using namespace std;

int main()
{
    int a=10;
    
    int *p=&a;

    cin>>*p;

    cout<<a;

    return 0;
    
}