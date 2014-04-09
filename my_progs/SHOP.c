#include<stdio.h>
int R,C,p,q,r,s;
int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;}
}
int min1(int y,int z)
{
      return (y<z)? y: z;
}

main()
{
      int cost[26][26],i,j,n,min=10000000;
      char c[26];
      scanf("%d%d",&C,&R);
      while(C!=0||R!=0){
      for(i=0;i<R;i++)
      {scanf("%s",c);
      for(j=0;j<strlen(c);j++)
      {
      if(c[j]=='X')
      cost[i][j]=min;
      else if(c[j]=='S')
      {cost[i][j]=0;
      p=i;q=j;}
      else if(c[j]=='D')
      {cost[i][j]=0;
      r=i;s=j;}
      else
      cost[i][j]=c[j]-48;
     }}
      for(i=0;i<R;i++)
      { for(j=0;j<C;j++)
      printf("%d   ",cost[i][j]);
      printf("\n\n");}
      n=minCost(cost,r,s);
      printf("%d\n",n);}
      getch();
}
