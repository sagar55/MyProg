#include<stdio.h>
#include<stdlib.h>
main()
{
      freopen("names.txt","r",stdin);
      int a[101][101],i,j;
     for(i=1;i<=100;i++)
     for(j=1;j<=i;j++)
     scanf("%d",&a[i][j]);
     for(i=2;i<=100;i++)a[i][1]+=a[i-1][1];
     for(i=2;i<=100;i++)a[i][i]+=a[i-1][i-1];
     for(i=3;i<=100;i++)
     {
                        for(j=2;j<=i-1;j++)
                        {
                                           if(a[i-1][j]>a[i-1][j-1])
                                           a[i][j]+=a[i-1][j];
                                           else a[i][j]+=a[i-1][j-1];
                                           }
                        }
                        j=a[100][1];
                        for(i=1;i<=100;i++)
                        if(a[100][i]>j)j=a[100][i];
                        printf("%d",j);
   getch();
      }
