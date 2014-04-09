#include<stdio.h>
#include<string.h>
int arr[5],x[6005];
char a[6005],b[6005];
int max(int m,int n)
{ return m>n?m:n;}

void strev(int l)
{int i=0,j=l-1;
         while(i<=j)
         { b[i]=a[j];
            b[j]=a[i];
            i++;
            j--;
            }
            b[l]='\0';
            }
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
      int t,l;
      scanf("%d",&t);
      while(t--){
      scanf("%s",a);
      l=strlen(a);
      strev(l);
      printf("%d\n",l-lcs(l));
      }
      getch();
      }
