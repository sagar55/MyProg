#include<stdio.h>
int b[101][101],a[101][101],n;
int solve()
{

          int i,j,k;
          for(i=0;i<n;i++)
           for(j=0;j<n;j++)
           { if(a[i][j])
           { k=a[i][j];
             if(i+k<n)
              { b[i+k][j]+=b[i][j];//printf("%d hi1\n",b[i+k][j]);
              }
               if(j+k<n){
               b[i][j+k]+=b[i][j];//printf("%d hi2\n",b[i][j+k]);
               }
               }
               }
              /*  for(i=0;i<n;i++)
           {for(j=0;j<n;j++)
           printf("%d ",b[i][j]);
           printf("\n");}*/
               return b[n-1][n-1];
               }
              
          
main()
{
      int i,j;
      char s[101];
      
      scanf("%d",&n);
      for(i=0;i<n;i++)
      { scanf("%s",s);
         for(j=0;j<strlen(s);j++)
      a[i][j]=s[j]-48;
      }
         if(a[0][0])
         b[0][0]=1;
          printf("%d\n",solve());
         // else
         //printf("0\n");
          return 0;
          }
          /*
          2 3 3 1
1 2 1 3
1 2 3 1
3 1 1 0*/
