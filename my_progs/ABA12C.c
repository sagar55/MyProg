#include<stdio.h>
int a[101][101],c[101][101];
main()
{
      int b[101],i,j,k,n,m,t;
      scanf("%d",&t);
      while(t--)
      {
      scanf("%d%d",&n,&m);
      for(i=1;i<=m;i++)
      scanf("%d",&b[i]);
      for(i=1;i<=m;i++)
         for(j=1;j<=m;j++)
         {
                          //printf("hi\n");
         if(i==1){
                  if(b[i]==-1)
                  a[i][j]=-1;
                  else{
                       if(j<=n){
                  a[i][j]=j*b[i];
                  c[i][j]=j;}
                  else
                  a[i][j]=-1;
                  }}
         else
         {
             if(j<i||b[i]==-1){
             a[i][j]=a[i-1][j];
             c[i][j]=c[i-1][j];}
             else{
                  if(a[i][j-i]==-1){
             a[i][j]=a[i-1][j];
             c[i][j]=c[i-1][j];
             }
             else{
                  if((c[i][j-i]+1)<=n){
             if(a[i-1][j]<=b[i]+a[i][j-i]&&a[i-1][j]!=-1){a[i][j]=a[i-1][j];c[i][j]=c[i-1][j];}
             else{
             a[i][j]=b[i]+a[i][j-i];c[i][j]=1+c[i][j-i];}
             }
             else{
             a[i][j]=a[i-1][j];
             c[i][j]=c[i-1][j];
             }}}}}
                /*for(i=1;i<=m;i++){
         for(j=1;j<=m;j++)*/
             printf("%d\n",a[m][m]);
             }
             return 0;
             }
             
         
