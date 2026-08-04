#include<iostream>
#include<vector>
using namespace std;


void printAll(vector<int> a)
{
    for(int x:a)
    {
        cout<<x<<" ";
    }
    
    cout<<endl;

}


int getMax(vector<int> a)
{   
    int max=*a.begin();

    for(auto it=a.begin();it!=a.end();it++)
    {
        if(*it>max)
        {
            max=*it;
        }
    }

    return max;

}


double getAve(vector<int> a,int n)
{   

    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }

    return sum/n;

}


int main()
{
    int n;

    cin>>n;

    vector<int> a;

    for(int i=0;i<n;i++)
    {   
        int x;

        cin>>x;

        a.push_back(x);

    }
    printAll(a);

    int max=getMax(a);

    cout<<"最大值:"<<endl<<max<<endl;

    double ave=getAve(a,n);

    cout<<"平均值:"<<endl<<ave;

    return 0;
}