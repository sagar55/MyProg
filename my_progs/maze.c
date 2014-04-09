#include<stdio.h>
int maze[100][100],sol[100][100],count,N;
int isSafe(int x,int y)
{
	if(x>=0 && x<N && y>=0 && y<N && !maze[x][y]&&!sol[x][y])
		return 1;
	return 0;
}
 
void Maze(int x,int y)
{
	static int i,j;
	if(x==N-1&&y==N-1)
	{ 
		sol[x][y]=1;
		count++;
	}
	else
	{
		if(isSafe(x,y))
		{
			sol[x][y]=1;
Maze(x-1,y);
Maze(x,y-1);
Maze(x+1,y);
Maze(x,y+1);
 
sol[x][y]=0;
		}
	}	
}
main()
{
      int i,j;
     //freopen("input.txt","r",stdin);
      scanf("%d",&N);
                                 count=0;
      for(i=0;i<N;i++)
       for(j=0;j<N;j++)
       { scanf("%d",&maze[i][j]);
       sol[i][j]=0;}
       if(maze[0][0]==1||maze[N-1][N-1]==1)
        printf("%d\n",count);
        else{
             Maze(0,0);
             printf("%d\n",count);
             }
             
        
        return 0;
        }
 
