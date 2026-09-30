#include<iostream>
#include<vector>
using namespace std;



int n;

vector<int> ls(n,0);



int find(int a)
{
    if (ls[a]==a)
    {
        return a;
    }
    else
    {
        return find(ls[a]);
    }
    
}



void isSame(int a,int b)
{
    if (find(a)==find(b))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
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




    int q;

    cin>>q;

    while(q--)
    {
        int choice,num1,num2;

        cin>>choice>>num1>>num2;

        if (choice==1)
        {
            Union(num1,num2);
        }
        else if(choice==2)
        {
            isSame(num1,num2);
        }

    }


    
    return 0;
}