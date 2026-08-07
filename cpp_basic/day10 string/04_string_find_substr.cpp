#include<iostream>
#include<string>
using namespace std;

int main()
{
    string web;

    cin>>web;

    int pos1=web.find('.');

    int pos2=web.find('.',pos1+1);

    string first=web.substr(0,pos1);

    string second=web.substr(pos1+1,pos2-pos1-1);

    string third=web.substr(pos2+1);

    cout<<"第一部分:"<<endl;

    cout<<first<<endl;


    cout<<"第二部分:"<<endl;

    cout<<second<<endl;


    cout<<"第三部分:"<<endl;

    cout<<third<<endl;


    return 0;
}