#include<stdio.h>
int arr[5],x[10000];
char a[100],b[100];
int max(int m,int n)
{ return m>n?m:n;}

int lcs(int m,int n)
{
    int i,j;
  for(i=0;i<=4;i++)
    arr[i]=0;
    for(i=0;i<=n;i++)
    x[i]=0;
  for( i=1;i<=m;i++)
  {   arr[1]=0;
  arr[2]=0;
      for(j=1;j<=n;j++)
     { 
             if(a[i-1]==b[j-1])
         arr[4]=1+arr[1];
         else
         arr[4]=max(arr[2],x[j]);
         arr[2]=arr[4];
         arr[1]=x[j];
         x[j]=arr[4];
    } printf("\n");}
    return arr[4];
}
main()
{
      scanf("%s%s",a,b);
      printf("%d",lcs(strlen(a),strlen(b)));
      getch();
      }
