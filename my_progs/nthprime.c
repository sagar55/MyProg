#include<stdio.h>
#include<stdbool.h>
#include<math.h>
long long b[200000000];
main()
{
      int m,i,j,n,t,k=2,l,count=0,p=0;
      bool a[1000000]={0};
       scanf("%d",&n); 
       i=2;
       while(count<n)
           { k=2;
                    if(a[i]==0){
                                count++;
                             b[p]=i;
                             p++;   
                        while(i*k<1000000)
                        {       if(a[i*k]==0)
                                 a[i*k]=1;
                                 k++;}}
                                 i++;}
                                 printf("%d",b[n-1]);
                               
                 getch();}
      
