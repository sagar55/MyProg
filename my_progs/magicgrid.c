#include<stdio.h>
int R,C;
int max(int x, int y)
{return x>y?x:y;}
int min(int x, int y)
{return x>y?y:x;}
int max1(int x,int y,int z)
{
    if(x>y)
    return x>z?x:z;
    else
    return y>z?y:z;
}
int solve(int cost[][101], int m, int n)
{
        int i, j,maxi=0,minneg=0;
     int tc[R][C];  
     tc[0][0] = cost[0][0];
      for (j = 1; j <C; j++)
        tc[0][j] = tc[0][j-1]+cost[0][j];
     for (i = 1; i < R; i++)
        for (j = 0; j <C; j++)
        {
          if(j==0)
             tc[i][j] = tc[i-1][j]+ cost[i][j];
             else
              tc[i][j] = max(cost[i][j]+tc[i-1][j],cost[i][j]+tc[i][j-1]);
            }
            /* printf("\n");
            for(i=0;i<R;i++)
             { for(j=0;j<C;j++)
               printf("%d ",tc[i][j]);
               printf("\n");
               }*/
          for (j = 1; j <C; j++)
        tc[0][j] = min(tc[0][j-1],tc[0][j]);
     for (i = 1; i < R; i++)
        for (j = 0; j <C; j++)
        {
        if(j==0)
        tc[i][j]=min(tc[i-1][j],tc[i][j]);
        else
        tc[i][j]=min(max(tc[i][j-1],tc[i-1][j]),tc[i][j]);
         }
            
           
          /*  printf("\n");
            for(i=0;i<R;i++)
             { for(j=0;j<C;j++)
               printf("%d ",tc[i][j]);
               printf("\n");
               }*/
        
     return tc[m][n];
}
main()
{
      int cost[101][101],i,j,n,min,t;
      scanf("%d",&t);
      while(t--){
      scanf("%d%d",&R,&C);
      for(i=0;i<R;i++)
      {
                      for(j=0;j<C;j++)
      scanf("%d",&cost[i][j]);
      }
      n=solve(cost,R-1,C-1);
      if(n>=0)
      min=1;
      else
      min=-1*n+1;
      printf("%d\n",min);}
      getch();
}

