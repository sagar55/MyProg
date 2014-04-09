#include<stdio.h>
#include<stdbool.h>
int R,C;
bool b[501][501]={0};
int max(int y,int z)
{
      return (y >z)? y : z;
}
int minCost(int cost[][501], int m, int n)
{
     int i, j;
     int tc[R][C];  
     tc[0][0] = cost[0][0];
      for (j = 1; j <C; j++)
        tc[0][j] =tc[0][j-1] + cost[0][j];
     for (i = 1; i < R; i++)
     {   for (j = 0; j <C; j++)
        {
             if(b[i][j]==0){
          if(j==0&&b[i-1][j]==0)
             tc[i][j] = tc[i-1][j] + cost[i][j];
             else if(b[i-1][j]==0&&b[i][j-1]==0)
              tc[i][j] = max(tc[i-1][j], tc[i][j-1]) + cost[i][j];
              else if(b[i-1][j]==0)
              tc[i][j]=tc[i-1][j] + cost[i][j];
              else if(b[i][j-1]==0)
              tc[i][j]=tc[i][j-1]+cost[i][j];
            }
            else
            tc[i][j]=cost[i][j];}
            }
     return tc[m][n];
}

main()
{
      int a[501][501],i,j,n;
      scanf("%d,%d",&R,&C);
      for(i=0;i<R;i++)
      {for(j=0;j<C;j++){
                        if(j<C-1)
      scanf("%d,",&a[i][j]);
      else
      scanf("%d",&a[i][j]);
      if(a[i][j]<0)
       b[i][j]=1;
       else
       b[i][j]=0;
      }}
      for(i=0;i<R;i++)
      {for(j=0;j<C;j++)
      {if(a[i][j]<0&&b[i][j]==1)
            {
          if(j!=0&&i!=R-1&&b[i+1][j-1]==0)
        a[i+1][j-1]+=a[i][j];
         if(i!=R-1&&b[i+1][j]==0&&(i+1!=R-1||j!=C-1))
        a[i+1][j]+=a[i][j];
         if(i!=R-1&&j!=C-1&&b[i+1][j+1]==0&&(i!=R-2||j!=C-2))
        a[i+1][j+1]+=a[i][j];
         if(i!=0&&j!=0&&b[i-1][j-1]==0&&(i!=1||j!=1))
        a[i-1][j-1]+=a[i][j];
         if(i!=0&&b[i-1][j]==0&&(i-1!=0||j!=0))
        a[i-1][j]+=a[i][j];
         if(j!=C-1&&i!=0&&b[i-1][j+1]==0&&((i-1)!=R-1||(j+1)!=C-1))
        a[i-1][j+1]+=a[i][j];
         if(j!=0&&b[i][j-1]==0&&(i!=0||(j-1)!=0))
        a[i][j-1]+=a[i][j];
         if(j!=C-1&&b[i][j+1]==0&&(i!=R-1||(j+1)!=C-1))
        a[i][j+1]+=a[i][j];
      }}} 
    
          n=minCost(a,R-1,C-1);
      printf("%d\n",n);
      return 0;
}
