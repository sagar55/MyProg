#include<stdio.h>
long long int  R,**cost;
long long int  min(long long int  x, long long int  y,long long int  z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}
long long int  minCost()
{
     long long int  i, j,x;
     long long int  **tc,min1,min2,min3,min4,min5;  
      tc = malloc(sizeof(long long int  *) * R);
                 for(x = 0; x < R; x ++) {
    tc[x] = malloc(sizeof(long long int ) * 3);
}
      for (j = 0; j <3; j++)
        tc[0][j] = cost[0][j];
     
         min1=min(tc[0][1]+tc[0][2],tc[0][1]+tc[1][1],tc[0][1]+tc[1][0]+tc[1][1]);
          tc[1][2]=((min1<tc[0][1])?min1: tc[0][1])+cost[1][2];
                        tc[1][1]=min(tc[0][1],tc[0][1]+tc[1][0],tc[0][1]+tc[0][2])+cost[1][1];
                         tc[1][0]=tc[0][1]+cost[1][0];
     for (i = 2;i < R;i++)
        for (j = 0; j <3; j++)
        {
            if(j==2)
             {
                     min1=min(tc[i-1][0]+cost[i-1][1],tc[i-1][0]+cost[i-1][1]+cost[i-1][2],tc[i-1][0]+cost[i-1][1]+cost[i][1]);
                      min2=min(tc[i-1][0]+cost[i][0]+cost[i][1],tc[i-1][0]+cost[i][1],tc[i-1][1]+cost[i][0]+cost[i][1]);
                      min3=min(tc[i-1][1]+cost[i][1],tc[i-1][1]+cost[i-1][2],tc[i-1][1]+cost[i-1][2]+cost[i][1]);
                      min4=min(tc[i-1][1],tc[i-1][2],tc[i-1][2]+cost[i][1]);
                      min5=min(min1,min2,min3);
                      tc[i][j]=((min4<min5)?min4:min5)+cost[i][j];
                    }
            else if(j==1){
              min1 = min(tc[i-1][j-1],tc[i-1][j],tc[i-1][j+1]);
             min2=min(tc[i-1][0]+cost[i][0],tc[i-1][0]+cost[i-1][1],tc[i-1][0]+cost[i-1][1]+cost[i-1][2]);
             min3=(min1<min2)?min1 : min2;
             tc[i][j]=min(tc[i-1][1]+cost[i-1][2],tc[i-1][1]+cost[i][0],min3)+cost[i][j];}
             else{
        tc[i][j] = min(tc[i-1][0]+cost[i-1][1],tc[i-1][0],tc[i-1][1]) + cost[i][j];
            }
            }
            i=tc[R-1][1];
            for(x = 0; x < R; x ++) {
    free(tc[x]);
}
free(tc);
     return i;
}
main()
{
      long long int  i,j,n=1,x;
      long long int  min;
      scanf("%lld",&R);
      while(R!=0)
      {
                 cost = malloc(sizeof(long long int  *) * R);
                 for(x = 0; x < R; x ++) {
    cost[x] = malloc(sizeof(long long int ) * 3);
}
      for(i=0;i<R;i++)
      {for(j=0;j<3;j++)
      scanf("%lld",&cost[i][j]);
      }
      min=minCost();
      printf("%lld. %lld\n",n,min);
      for(x = 0; x < R; x ++) {
    free(cost[x]);
}
free(cost);
      scanf("%lld",&R);
      n++;}
      return 0;
}
