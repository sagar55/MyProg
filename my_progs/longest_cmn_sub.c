#include<stdio.h>
int arr[100][100];
char a[100],b[100];
int max(int m,int n)
{ return m>n?m:n;}
back_track(int i,int j)
{
    if(i==0|j==0)
    return ;
    if(a[i-1]==b[j-1])
    back_track(i-1,j-1),printf("%c ",a[i-1]);
    else if(arr[i-1][j]>arr[i][j-1])
    back_track(i-1,j);
    else
    back_track(i,j-1);
}      
int lcs(int m,int n)
{
    int i,j;
  for(i=0;i<=m;i++)
    arr[i][0]=0;
  for(i=0;i<=n;i++)
    arr[0][i]=0;
  for( i=1;i<=m;i++)
     for(j=1;j<=n;j++)
     { 
             if(a[i-1]==b[j-1])
             arr[i][j]=1+arr[i-1][j-1];
         else 
         arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
    } 
    back_track(m,n);
    return arr[m][m];
}
main()
{
    printf("enter two string to find LCS\n");
      scanf("%s%s",a,b);
      printf("\nLCS is %d",lcs(strlen(a),strlen(b)));
      return 0;
      }
