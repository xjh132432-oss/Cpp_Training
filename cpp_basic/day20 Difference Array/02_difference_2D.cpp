#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n,m;

    cin>>n>>m;

    vector<vector<int>> p(n+2,vector<int>(m+2,0));
    
    int q;

    cin>>q;

    while(q--)
    {
        int x1,y1,x2,y2,c;

        cin>>x1>>y1>>x2>>y2>>c;

        p[x1][y2+1]-=c;

        p[x2+1][y1]-=c;

        p[x2+1][y2+1]+=c;

        p[x1][y1]+=c;
    }
    
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=n;j++)
        {
            p[i][j]+=p[i-1][j]+p[i][j-1]-p[i-1][j-1];


            cout<<p[i][j]<<" ";
        }
        
        cout<<endl;

    }



    return 0;
}