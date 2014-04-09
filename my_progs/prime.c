#include<iostream>
#include<cstdio>
using namespace std;
void prime(int n){
bool a[n+1];
      int m,i,j;
       for(i=0;i<=n;i++)
          a[i]=0;
       m=sqrt(n);  
       for(i=2;i<=m;i++)
           { 
            if(a[i]==0){
	         for(j=2;i*j<=n;j++)
                if(a[i*j]==0)
                a[i*j]=1;
            }
		}
for(i=2;i<=n;i++)
if(a[i]==0)
cout<<i<<endl;
}
main()
{
int n;
cin>>n;
prime(n);
return 0;
}#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool a[1000002];
main()
{
      int m,i,j,n,t,k=2,l;
      
       scanf("%d",&n);
       for(l=0;l<=n;l++)
          a[l]=0;
       m=sqrt(n);  
       for(i=2;i<=m;i++)
           { k=2;
                    if(a[i]==0){
                        while(i*k<=n)
                        {       if(a[i*k]==0)
                                 a[i*k]=1;
                                 k++;}}}
          scanf("%d",&i);
          if(a[i]==0)
               printf("%d\n",i);          
                 getch();}
      

