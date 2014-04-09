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
    int a[10000],b,m,i=0,j,n,index,x=0;
    char c[10000];
    scanf("%d%d",&n,&b);
     m=n;
    while(n>0)
    {
       a[i]=n%10;
       n=n/10;
       i++;
	   
	}
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
    printf("%d\n",x);
    getch();
}
        
