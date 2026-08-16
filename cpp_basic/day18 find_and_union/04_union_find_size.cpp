#include<iostream>
#include<vector>
#include<map>
using namespace std;



int n=100;

vector<int> ls(n,0);



int find(int a)
{
    if (ls[a]==a)
    {
        return a;
    }
    else
    {
        return ls[a]=find(ls[a]);
    }
    
}



void Union(int a,int b)
{
    int rootx=find(a);

    int rooty=find(b);

    if(rootx!=rooty)
    {
        ls[rooty]=rootx;
    }
    
}




int main()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        ls[i]=i;
    }




    int m;

    cin>>m;

    while(m--)
    {
        int num1,num2;

        cin>>num1>>num2;

        Union(num1,num2);


    }



    map<int,int> count;

    for(auto x:ls)
    {   

        count[x]++;
    }


    cout<<count[count.size()-1];


    return 0;
}