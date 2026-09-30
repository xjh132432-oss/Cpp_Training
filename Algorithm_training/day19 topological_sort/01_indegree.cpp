#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    vector<vector<int>> point(n+1);

    vector<int> count(n+1);

    for(int i=0;i<m;i++)
    {
        int num1,num2;

        cin>>num1>>num2;

        point[num1].push_back(num2);

        count[num2]++;
    }

    for(int x:count)
    {
        cout<<x<<" ";
    }

    return 0;
}