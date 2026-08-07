#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;

    cin>>s;

    cout<<"长度:"<<endl<<s.size()<<endl;

    cout<<s[0]<<" "<<s[s.size()-1]<<endl;

    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }

    cout<<endl;

    for(int i=s.size()-1;i>=0;i--)
    {
        cout<<s[i]<<" ";
    }

    return 0;
}