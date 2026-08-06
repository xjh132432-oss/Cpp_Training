#include<iostream>
using namespace std;

void swap_number(int &a,int &b);

int main()
{
    int a=2,b=3;

    swap_number(a,b);

    cout<<a<<" "<<b;
}


void swap_number(int &a,int &b)
{
    int c;

    c=a;

    a=b;

    b=c;

}