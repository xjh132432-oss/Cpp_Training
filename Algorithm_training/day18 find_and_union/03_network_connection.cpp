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
        return ls[a]=find(ls[a]);
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
    

    for(int i=0;i<n;i++)
    {
        ls[i]=i;
    }




    int q;

    cin>>q;

    while(q--)
    {
        int num1,num2;

        char choice;

        cin>>choice>>num1>>num2;

        if (choice=='c')
        {
            Union(num1,num2);
        }
        else if(choice=='q')
        {
            isSame(num1,num2);
        }

    }


    
    return 0;
}