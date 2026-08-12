#include<iostream>
// Day 04: pointers and references practice.
using namespace std;

int main()
{
    int a=10;
    
    int *p=&a;

    cin>>*p;

    cout<<a;

    return 0;
    
}
