#include<stdio.h>
int mul(int a[],int n,int p)
{
          int m=0,i,j,temp=0,index=0,x;
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
    int a[200],b,m,i=0,j,n,t,index,x=0;
    scanf("%d%d",&n,&b);
     m=n;
    while(n>0)
    {
       a[i]=n%10;
       n=n/10;
       i++;}
       j=m;
    while(b>1)
    {
        index=mul(a,j,i);
        i=index;
        b--;}
    for(i=index-1;i>=0;i--){
    printf("%d\n",a[i]);x=x+a[i];}
    printf("%d",x);
    return 0;
}
        
