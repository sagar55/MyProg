#include<stdio.h>
int a[100000];     
int gcd(int i,int j)
      {
           if(j==0)
            return i;
            else
              return gcd(j,i%j);
              }
main()
{
int n,x,y,q,i;
long long int sum;
scanf("%d",&i);
q=i-1;
scanf("%d",&x);
for(i=0;i<q;i++)
{
scanf("%d",&y);
a[i]=y-x;
x=y;
}
n=a[0];
for(i = 1; i < q; i++)
    n = gcd(n, a[i]);
sum=0;
for(i=0;i<q;i++)
{ a[i]=a[i]/n;
sum=sum+a[i];
}
printf("%d\n",sum-q);
system("pause");
return 0;
}
