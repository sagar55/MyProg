#include<stdio.h>
long long int a[2][2000001],b[501][2];
main ()
{
    long long int i,j,n,max,amt,fee,fun,min,t,swap1,swap2;
                   scanf("%lld%lld",&amt,&n);
       i=1;
      while(i<=n)
      { scanf("%lld%lld",&b[i][1],&b[i][0]);
         i++;}
         for(j=1;j<n;j++)
         {  
                   min=j;
                   for(i=j+1;i<=n;i++)
                   { if(b[min][0]>b[i][0])
                    min=i;
                    }
                    if(min!=j)
                   {
                              swap1=b[j][0];
                              swap2=b[j][1];
                                        b[j][0]=b[min][0];
                                         b[j][1]=b[min][1];
                                        b[min][0]=swap1;
                                        b[min][1]=swap2;
                   }
            }                  
         max=amt;
       for(j=0;j<=amt;j++)
       a[0][j]=0;
      for(i=1;i<=n;i++)
       {
            for(j=0;j<=amt;j++)
       {
            if(b[i][0]>j)
            {
        a[1][j]=a[0][j];
            }
        else{
             if(b[i][1]+a[0][j-b[i][0]]>a[0][j])
             { 
                  a[1][j]=b[i][1]+a[0][j-b[i][0]];
             }
              else
              {
              a[1][j]=a[0][j];
              }
             }
             
       }
      
       for(j=0;j<=amt;j++)
       a[0][j]=a[1][j];
       }
              printf("Hey stupid robber, you can get %lld.\n",a[1][amt]);
             getch();
              }
/*
10 4
40 4
10 5
50 3
30 6
*/
