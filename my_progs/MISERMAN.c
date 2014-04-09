#include<stdio.h>
int R,C;
int max(int x, int y)
{
  return y>x?y:x;
  
}
int min(int x, int y)
{
  return y>x?x:y;
  
}
int minCost(int cost[][101])
{
     int i, j;
     int tc[R+1][R+1];  
     tc[0][0] = cost[0][0];
      for (j = 1; j <R; j++)
        tc[0][j] = tc[0][j-1]+cost[0][j];
     for (i = 1; i < R; i++)
        for (j = 0; j <R; j++)
        {
           if(j==0)
            tc[i][j] = tc[i-1][j]+ cost[i][j];
            else
             tc[i][j] = min(tc[i-1][j],tc[i][j-1]) + cost[i][j];
                }
           
     return tc[R-1][R-1];
}
int maxCost(int cost[][101])
{
     int i, j;
     int tc[R+1][R+1];  
     tc[0][0] = cost[0][0];
      for (j = 1; j <R; j++)
        tc[0][j] = tc[0][j-1]+cost[0][j];
     for (i = 1; i < R; i++)
        for (j = 0; j <R; j++)
        {
           if(j==0)
            tc[i][j] = tc[i-1][j]+ cost[i][j];
            else
             tc[i][j] = max(tc[i-1][j],tc[i][j-1]) + cost[i][j];
                }
           
     return tc[R-1][R-1];
}
main()
{
      int cost[101][101],i,j,t;
      scanf("%d",&t);
      while(t--){
      scanf("%d",&R);
      for(i=0;i<R;i++)
      for(j=0;j<R;j++)
      scanf("%d",&cost[i][j]);
      printf("%lf %lf\n",((double)minCost(cost))/(2*R-1),((double)maxCost(cost))/(2*R-1));
	  }
      getch();
}
