#include<stdio.h>
int R,C;
int min(int x, int y)
{
 return x<y?x:y;
}
int minCost(int cost[][101], int m, int n,int p,int q)
{
     int i, j;
     int tc[R][C];  
     tc[p][q] = cost[p][q];
      for (j = q+1; j <C; j++)
        tc[p][j] = tc[p][j-1]+cost[p][j];
     for (i = p+1; i < R; i++)
        for (j = q; j <C; j++)
        {
           if(j==q)
             tc[i][j] = tc[i-1][j] + cost[i][j];
             else
             tc[i][j] = min(tc[i-1][j],tc[i][j-1]) + cost[i][j];
             }
     return tc[m][n];
}
main()
{
      int cost[101][101],i,j,n,p,q,m;
      scanf("%d%d",&R,&C);
      scanf("%d%d",&p,&q);
      for(i=0;i<R;i++)
      for(j=0;j<C;j++)
      scanf("%d",&cost[i][j]);
      m=cost[p-1][q-1];
      cost[p-1][q-1]=0;
      n=minCost(cost,R-1,C-1,p-1,q-1);
      if((m-n)>0)
      printf("Y %d\n",m-n);
      else
       printf("N\n");
      getch();
}
