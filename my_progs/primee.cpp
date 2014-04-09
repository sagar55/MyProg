#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool a[1000005];
int b[1000000];
int f(int n)
{
      int l,i,j,k,m,p=0;
             for(l=0;l<=n;l++)
        { a[l]=0; b[n]=99999999;}
       m=sqrt(n);  
       for(i=2;i<=m;i++)
           { k=2;
                    if(a[i]==0){
                                b[p++]=i;
                        while(i*k<=n)
                        {       if(a[i*k]==0)
                                 a[i*k]=1;
                                 k++;}}}}
main()
{
      int m,i,j,n,t,k=2,l,flag;
      
    freopen("input.txt","r",stdin); 
    freopen("out.txt","w",stdout);
      f(1000000);
      scanf("%d",&t);
      while(t--)
      {
       scanf("%d",&n);
       if(n!=2&&(n%2==0||n==1))
       printf("-1\n");
       else{
      flag=0;
       m=sqrt(n); 
       for(l=2;l<=m;l++)
       if(n%l==0)
       {         flag=1;
                 break;}
       if(flag==1)
       printf("-1\n");
       else{ i=0;
            while(b[i++]<n)
            ;
               printf("%d\n",i);}
               }
               }
                return 0;}
      



