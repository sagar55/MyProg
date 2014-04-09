#include<stdio.h>
int a[101][10001],b[101][2];
main ()
{
    int i,j,n,max,amt,fee,fun,min,t,swap1,swap2;
    
    printf("enter total no of items\n");
    scanf("%d",&n);
    printf("enter total max amount of knapsack bag\n");
                   scanf("%d",&amt);
       i=1;
       printf("enter weight and profit of each of n items\n");
      while(i<=n)
      {  
            scanf("%d%d",&b[i][0],&b[i][1]);
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
      for(i=0;i<=n;i++)
       a[i][0]=0;
       for(j=0;j<=amt;j++)
       a[0][j]=0;
      for(i=1;i<=n;i++)
       {
            for(j=0;j<=amt;j++)
       {
            if(b[i][0]>j)
            {
        a[i][j]=a[i-1][j];
            }
        else{
             if(b[i][1]+a[i-1][j-b[i][0]]>a[i-1][j])
             { 
                  a[i][j]=b[i][1]+a[i-1][j-b[i][0]];
             }
              else
              {
              a[i][j]=a[i-1][j];
              }
             }
       }
       }
              printf("Max profit is %d\n",a[n][amt]);
              return 0;

              int sz=
              }
/*
10 4
40 4
10 5
50 3
30 6
*/
