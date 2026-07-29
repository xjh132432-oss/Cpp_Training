#include<iostream>
#include<map>

using namespace std;


int main()
{
    map<string,int> friute;
    
    string fru1,search;
    
    int num;

    for(int i=0;i<2;i++)
    {
        cin>>fru1>>num;
        
        friute[fru1]=num;
    }
    
    cin>>search;

    cout<<friute[search];

    return 0;

}