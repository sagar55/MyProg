#include<stdio.h>
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
    int a[10000],b,m,i=0,t,k=0,j,n=2,index,x=0,p[100];
    char c[10000];
    scanf("%d",&t);
    while(t){
    
    scanf("%d",&b);
    n=2;
     m=n;
     i=0;x=0;
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
    for(i=index-1,j=0;i>=0;i--,j++){
    c[j]=a[i]+48;
    x=x+a[i];}
    c[index]='\0';
    printf("%s\n",c);
    p[k++]=x;
t--;}
for(i=0;i<k;i++)
    printf("%d\n",p[i]);
    getch();
}
        
