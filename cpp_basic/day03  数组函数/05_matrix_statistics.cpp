#include<iostream>
using namespace std;
int get_sum(int a[100][100],int n,int m);
int get_max(int a[100][100],int n,int m);
int countPositive(int a[100][100],int n,int m);
int main()
{
    int n,m;

    int a[100][100];

    cin>>n>>m;

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            cout<<"请输入第"<<i+1<<"行第"<<j+1<<"列:";

            cin>>a[i][j];
        }
    }//输入矩阵


    cout<<"矩阵:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }//输出矩阵

    int sum=get_sum(a,n,m);
    int max=get_max(a,n,m);
    int count=countPositive(a,n,m);
    cout<<"总数:"<<endl<<sum<<endl;
    cout<<"最大:"<<endl<<max<<endl;
    cout<<"正数:"<<endl<<count<<endl;    
    
    return 0;
}
int get_sum(int a[100][100],int n,int m)
{   
    int sum=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            sum+=a[i][j];
        }
    }

    
    return sum;
}

int get_max(int a[100][100],int n,int m)
{   
    int max=a[0][0];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }


    return max;

}

int countPositive(int a[100][100],int n,int m)
{   
    int count=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            if(a[i][j]>0)
            {
                count++;
            }
        }
    }


    return count;
}