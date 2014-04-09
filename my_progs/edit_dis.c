
#include<stdio.h>
#include<string.h>
    int edit[2001][2001];
char a[2001],b[2001];
int min(int m,int n,int p)
{   if(m<n)
    return m<p?m:p;
    else
    return n<p?n:p;}

int lcs(int m,int n)
{
    int i,j;

    for(i=0;i<=m;i++)
     edit[i][0]=i;
                  for(i=0;i<=n;i++)  
                   edit[0][i]=i;
  for( i=1;i<=m;i++)
  { 
      for(j=1;j<=n;j++)
     { 
                   //    printf("hi\n");
        edit[i][j]=min(1+edit[i-1][j],1+edit[i][j-1],edit[i-1][j-1]+(a[i-1]==b[j-1]?0:1));
    }}
return edit[m][n];
}
main()
{
      int t;
      scanf("%d",&t);
      while(t--){
      scanf("%s%s",a,b);
      printf("%d\n",lcs(strlen(a),strlen(b)));}
      return 0;
      }
