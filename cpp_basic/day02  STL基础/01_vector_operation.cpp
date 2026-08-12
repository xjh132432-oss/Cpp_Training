#include<iostream>
#include<vector>
// Day 02: STL basics practice.
using namespace std;
int main()
{
    int n;

    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    a.pop_back();

    for(int x:a)
    {
        cout<<x<<" ";
    }

    return 0;
}
