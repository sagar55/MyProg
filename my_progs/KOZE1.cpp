#include <iostream>
#include<queue>
#include <vector>
#include<stdio.h>
using namespace std;
int visit[251][251],N,M,sheep,wolf;
char a[251][251];
int isSafe(int x,int y)
{
	if(x>=0 && x<N && y>=0 && y<N &&!visit[x][y]&&a[x][y]!='#')
	{
         if(a[x][y]=='k')
            sheep++;
            else if(a[x][y]=='v')
            wolf++;
        	return 1;
        }
	return 0;
}
    int DFS(int i,int j) {               
    visit[i][j]=1;
    if(isSafe(i+1,j))
       DFS(i+1,j);
     if(isSafe(i,j+1))
        DFS(i,j+1);
      if(isSafe(i-1,j))
        DFS(i-1,j);
      if(isSafe(i,j-1))
        DFS(i,j-1);
            }
        
main(){

      int i,j,ans1=0,ans2=0;
      scanf("%d%d",&N,&M);
      for(i=0;i<N;i++)
        scanf("%s",a[i]);
       for(i=0;i<N;i++)
       for(j=0;j<M;j++)
       {
            sheep=0;
            wolf=0;

            if(visit[i][j]==0&&a[i][j]!='#'){
if(a[i][j]=='k')
            sheep++;
            else if(a[i][j]=='v')
            wolf++;
             DFS(i,j);
            // cout<<sheep<<" "<<wolf<<endl;
            if(sheep>wolf)
            ans1+=sheep;
            else
            ans2+=wolf;
             }
            }

cout<<ans1<<" "<<ans2<<endl;
return 0;
  }



