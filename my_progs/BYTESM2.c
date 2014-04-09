#include<stdio.h>
int R,C,tc[101][101];
int max(int x, int y, int z)
{
   if (x > y)
      return (x > z)? x : z;
   else
      return (y > z)? y : z;
}
int maxCost(int cost[][101], int m, int n)
{
     int i, j;
      for (j = 0; j <C; j++)
        tc[0][j] = cost[0][j];
     for (i = 1; i < R; i++)
        for (j = 0; j <C; j++)
        {
            if(tc[i][j]==0){
           if(j==C-1)
            tc[i][j] = max(tc[i-1][j-1],tc[i-1][j],0) + cost[i][j];
            else if(j==0)
             tc[i][j] = max(0,tc[i-1][j],tc[i-1][j+1]) + cost[i][j];
             else
              tc[i][j] = max(tc[i-1][j-1], tc[i-1][j],tc[i-1][j+1]) + cost[i][j];}
            }
     return tc[m][n];
}
main()
{
      int cost[101][101],i,j,n,max,t;
      scanf("%d",&t);
      while(t--){max=0;
      for(i=1;i<101;i++)
      for(j=0;j<101;j++)
      tc[i][j]=0;
      scanf("%d%d",&R,&C);
      for(i=0;i<R;i++)
      {for(j=0;j<C;j++)
      scanf("%d",&cost[i][j]);
      }
      for(i=0;i<C;i++){
      n=maxCost(cost,R-1,i);
      if(n>max)
      max=n;}
      printf("%d\n",max);}
      getch();
}
