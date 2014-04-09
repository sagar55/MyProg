#include<stdio.h>
#include<string.h>
int arr[5],x[100001];
int a[100001],b[100001];
int max(int m,int n)
{ return m>n?m:n;}

int lcs(int n)
{
    int i,j;
  for(i=0;i<=4;i++)
    arr[i]=0;
    for(i=0;i<=n;i++)
    x[i]=0;
  for( i=1;i<=n;i++)
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
    }}
    return arr[4];
}
main()
{
      int t,i,l;
      scanf("%d",&t);
      while(t--){
                 scanf("%d",&l);
                 for(i=0;i<l;i++)
          scanf("%d",&a[i]);
          for(i=0;i<l;i++)
          scanf("%d",&b[i]);
      printf("%d\n",lcs(l));
      }
      getch();
      }
