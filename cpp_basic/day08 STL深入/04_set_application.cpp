#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n;

    set<string> users;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        string name;

        cin>>name;

        users.insert(name);

    }

    cout<<users.size();
}