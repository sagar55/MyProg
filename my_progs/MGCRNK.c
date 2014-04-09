#include<stdio.h>
int R;
int max(int x, int y)
{
      return (x>y)? x : y;
}
int minCost(int cost[][101], int n)
{
     int i, j;
     int tc[R][R];  
     tc[0][0] = cost[0][0];
      for (j = 0; j <R; j++)
        tc[0][j] = cost[0][j];
        for(i=1;i<R;i++)
        tc[0][i]+=tc[0][i-1];
     for (i = 1; i < R; i++)
        for (j = 0; j <R; j++)
        {
           if(j==0)
            tc[i][j] =tc[i-1][j]+cost[i][j];
             else
              tc[i][j] = max(tc[i][j-1],tc[i-1][j]) + cost[i][j];
            }
           
     return tc[n][n];
}
main()
{
      int cost[101][101],i,j,t;
      float n;
      scanf("%d",&t);
      while(t--){
      scanf("%d",&R);
      for(i=0;i<R;i++)
      for(j=0;j<R;j++)
      scanf("%d",&cost[i][j]);
     n=minCost(cost,R-1); 
     if(n<0)
     printf("Bad Judges\n");
     else
     { if(R==1)
     printf("%f\n",n);
     else
      printf("%f\n",n/(2*R-3));
      }}
      getch();
}
