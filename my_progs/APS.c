#include<stdio.h>
#include<stdbool.h>
#include<math.h>
long long int a[10000002];
main()
{
      int m,i,j,n,t,k=2,l;
      n=10000001;
       m=sqrt(n);
       for(i=2;i<=m;i++)
           { k=2;
                    if(a[i]==0){
                                a[i]=i;
                        while(i*k<=n)
                        {       if(a[i*k]==0)
                                 a[i*k]=i;
                                 k++;}}}
                                 // for(i=1;i<21;i++)
                             //printf("%d %d\n",i,a[i]);
                    for(i=3;i<10000001;i+=2){
   if(!a[i])a[i]=i;
     a[i-1]=a[i-2]+2;
    a[i]+=a[i-1];
     }
           scanf("%d",&t);
           while(t--){
            
                         scanf("%d",&n);
                         printf("%lld\n",a[n]);             
                         }
                         return 0;
                         }
      
