#include<stdio.h>
#include<math.h>
int n,col[51],fix[51],b;
int promising(int i)
{
    int k=1,flag=1;
    while(k<i&&flag){
    if(col[i]==col[k]||abs(col[i]-col[k])==i-k)
    flag=0;
    k++;
    }
return flag;
}
    
void Q(int i)
{
    // printf(":%d\n",i);
    if(b){
     int j,k;
     if(promising(i))
     {
                     if(i==n)
                     {for(k=1;k<=n;k++)
                      printf("%d ",col[k]);
                      b=0;
                       printf("\n");
                      }
                      else{
                           for(j=1;j<=n;j++)
                           {
                      if(!fix[i+1]){
                      col[i+1]=j;}
                           Q(i+1);}
                           }
                           }}
                           }
main()
{
      int t,i;
     
            while(scanf("%d",&n)!=EOF){
      for(i=1;i<=n;i++)
     { scanf("%d",&col[i]);
     if(col[i])
     fix[i]=1;
     else
     fix[i]=0;
     }
     b=1;
      i=1;
      while(i<=n&&b)
     {
                       if(!fix[1])
                           col[1]=i;
                      Q(1);
                      i++;
     }}
      return 0;
      }
                    


