#include<iostream>
#include<vector>
#include<queue>
using namespace std;


struct Node
{
    int x;
    int y;
    int step;
};


int main()
{
    int n,m;

    cin>>n>>m;

    vector<string> maze(n);

    for(int i=0;i<n;i++)
    {
        cin>>maze[i];
    }

    vector<vector<int>> visited(
        n,
        vector<int>(m,0)
    );

    queue<Node> q;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(maze[i][j]=='S')
            {
                q.push({i,j,0});

                visited[i][j]=1;
            }
        }
    }

    int dx[4]={-1,1,0,0};

    int dy[4]={0,0,-1,1};

    while(!q.empty())
    {
        Node cur=q.front();

        q.pop();

        if(maze[cur.x][cur.y]=='E')
        {
            cout<<cur.step;

            return 0;
        }
        

        for(int i=0;i<4;i++)
        {
            int nx=cur.x+dx[i];

            int ny=cur.y+dy[i];



            if(nx<0||nx>=n||
               ny<0||ny>=m)
            {
                continue;
            }



            if(maze[nx][ny]=='#')
            {
                continue;
            }



            if(visited[nx][ny])
            {
                continue;
            }



            visited[nx][ny]=1;


            q.push(
                {
                    nx,
                    ny,
                    cur.step+1
                }
            );
        }
    }


    cout<<"NO";


    return 0;
}