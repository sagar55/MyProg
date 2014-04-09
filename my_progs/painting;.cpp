#include<stdio.h>
int n,mi,mj;
check(char a[][51],char b[][51])
{
  int i,j;
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   if(a[i][j]!=b[i][j])
    { mi=i;
    mj=j;
}
}
  
main()
{
      int i,j,k;
      char a[51][51],b[51][51];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%s",a[i]);
      for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       b[i][j]='W'
      for(
      
