#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int> student;

    for(int i=0;i<n;i++)
    {
        int x;

        cin>>x;

        student.push_back(x);

    }

    vector<int>prefix(n+1);
    
    for(int i=0;i<n;i++)
    {
        prefix[i+1]=prefix[i]+student[i];
    }

    int con;

    cin>>con;

    for(int i=0;i<con;i++)
    {
        int l,r;

        cin>>l>>r;

        cout<<prefix[r+1]-prefix[l]<<endl;

        
    }


    return 0;
}