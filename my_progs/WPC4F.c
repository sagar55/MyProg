#include<stdio.h>
int R,C=3;
min(int x,int y)
{   return (x<y)?x:y;}
int minCost(int cost[][4], int m, int n)
{
     int i, j;
     int tc[R][C];  
     tc[0][0] = cost[0][0];
      for (j = 0; j <C; j++)
        tc[0][j] = cost[0][j];
     for (i = 1; i < R; i++)
        for (j = 0; j <C; j++)
        {
           if(j==C-1)
            tc[i][j] = min(tc[i-1][j-1],tc[i-1][j-2]) + cost[i][j];
            else if(j==0)
             tc[i][j] =min(tc[i-1][j+1],tc[i-1][j+2]) + cost[i][j];
             else
              tc[i][j] = min(tc[i-1][j-1],tc[i-1][j+1]) + cost[i][j];
            }
     return tc[m][n];
}
main()
{
      int cost[22][4],i,j,n,min,t;
      scanf("%d",&t);
      while(t--){
      scanf("%d",&R);
      if(R==0)
              printf("0\n");
              else{
      for(i=0;i<R;i++)
      {for(j=0;j<C;j++)
      scanf("%d",&cost[i][j]);
      }
      min=200001;
      for(i=0;i<C;i++){
      n=minCost(cost,R-1,i);
      if(n<min)
      min=n;}
      printf("%d\n",min);}}
      getch();
}
