#include<stdio.h>
long int bit[1030][1030],n,a[1030][1030];
long int read(long int x,long int y)
{
long int sum=0,j;
while(x)
{
j=y;
while(j)
{
sum+=bit[x][j];
j-=(j&-j);
}
x-=(x&-x);
}
return sum;
}
initialize()
{
int i,j;
for(i=1;i<=1025;i++)
{
for(j=1;j<=1025;j++)
{
a[i][j]=0;bit[i][j]=0;
}
}
}
void updatey(long int x,long int y,long int val)
{
while(y<=n)
{
bit[x][y]+=val;
y+=(y&-y);
}
}
void update(long int x,long int y,long int val)
{
while(x<=n)
{
updatey(x,y,val);
x+=(x&-x);
}
}
main()
{
long int t,p,q,r,s,x,y,z;
char c[5];
scanf("%ld",&t);
while(t--)
{
initialize();
scanf("%ld",&n);
while(1)
{
scanf("%s",c);
if(!strcmp(c,"SET"))
{
//printf("enter the value");
scanf("%ld%ld%ld",&p,&q,&r);
x=a[p+1][q+1];
update(p+1,q+1,r-x);
a[p+1][q+1]=r;
}
else if(!strcmp(c,"SUM"))
{
//printf("enter the value");
scanf("%ld%ld%ld%ld",&p,&q,&r,&s);
x=read(p+1,q+1);
y=read(r+1,s+1);
printf("%ld\n",y-x+a[p+1][q+1]);
}
else break;
}
printf("\n");
}
return 0;
}


