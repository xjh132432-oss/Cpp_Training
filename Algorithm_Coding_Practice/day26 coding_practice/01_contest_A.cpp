#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cin>>a>>b>>c;
    
    int ab=a-b,bc=b-c,ac=c-a;
    
    if(a-b<=0)
    {
        ab=-(a-b);
    }
    
    
    if(b-c<=0)
    {
        bc=-(b-c);
    }
    
    if(c-a<=0)
    {
        ac=-(c-a);
    }
    
    cout<<4*ab+2*bc+ac;

    return 0;
}