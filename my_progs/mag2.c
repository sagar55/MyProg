#include<stdio.h>
main()
{
int t,i,j,x,y,r,c,p,min[501][501],curr[501][501];
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&r,&c);
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
scanf("%d",&p);
if(i==1&&j==1)
{
curr[1][1]=1;
min[1][1]=1;
}
else if(i==1)
{
min[1][j]=min[1][j-1];
curr[1][j]=curr[1][j-1]+p;
if(curr[1][j]<=0)
{
curr[1][j]=1;
min[1][j]=min[1][j-1]+1-p-curr[1][j-1];
}
}
else if(j==1)
{
min[i][1]=min[i-1][1];
curr[i][1]=curr[i-1][1]+p;
if(curr[i][1]<=0)
{
curr[i][1]=1;
min[i][1]=min[i-1][1]+1-p-curr[i-1][1];
}
}
else
{
x=curr[i-1][j]+p;
y=curr[i][j-1]+p;
if(x>0&&y>0)
{
if(min[i-1][j]>min[i][j-1])
{
min[i][j]=min[i][j-1];
curr[i][j]=y;
}
if(min[i-1][j]==min[i][j-1])
{
min[i][j]=min[i-1][j];
curr[i][j]=y;
if(x>y)curr[i][j]=x;
}
if(min[i-1][j]<min[i][j-1])
{
min[i][j]=min[i-1][j];
curr[i][j]=x;
}
}
if(x>0&&y<=0)
{
if(min[i-1][j]<=min[i][j-1]-p-curr[i][j-1]+1)
{
curr[i][j]=x;
min[i][j]=min[i-1][j];
}
else
{
curr[i][j]=1;
min[i][j]=min[i][j-1]-p-curr[i][j-1]+1;
}
}
if(x<=0&&y>0)
{
if(min[i][j-1]<=min[i-1][j]-p-curr[i-1][j]+1)
{
curr[i][j]=y;
min[i][j]=min[i][j-1];
}
else
{
curr[i][j]=1;
min[i][j]=min[i-1][j]-p-curr[i-1][j]+1;
}
}
if(x<=0&&y<=0)
{
curr[i][j]=1;
min[i][j]=min[i-1][j]-p-curr[i-1][j]+1;
if(min[i][j]>min[i][j-1]-p-curr[i][j-1]+1)
min[i][j]=min[i][j-1]-p-curr[i][j-1]+1;
}
}
}
}
printf("%d\n",min[r][c]);
}
return 0;
}

