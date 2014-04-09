#include<stdio.h>
 char c[10000];
long long int divide(long long int j,long long int i)
{
    long long int k;
    long long int temp=0,carry=0;
    for(k=0;k<j;k++)
    {
temp=(c[k]-48)+carry*10;
if(temp<1)
{
carry=temp;temp=0;
}
else
{
carry=temp%i;
temp=temp/i;
}
}
return carry;
}
int mul(int a[],int n,int p)
{
          int m=0,temp=0,index=0,x;
          while(m!=p)                           
          {                                    
           x=a[index]*n+temp; 
           a[index]=x%10;
           temp=x/10;
           index=++m;
           }
                     while(temp>0)
                     {
                     a[index]=temp%10;
                     temp=temp/10;
                     index=++m;
                     }
                     return index;}
main()
{
    int a[10000],b,m,i,j,n=2,index,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&b);
    b++;
       a[0]=2;
       i=1;
       j=n;
    while(b>1)
    {
        index=mul(a,j,i);
        i=index;
        b--;}
    for(i=index-1,j=0;i>=0;i--,j++)
    c[j]=a[i]+48;
    c[index]='\0';
    printf("%lld\n",divide(index,12980742146);}
    getch();
}
        
