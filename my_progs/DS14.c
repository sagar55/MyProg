#include<stdio.h>
int count,x,y;
solve(char a[][202],int b[][201],int p,int q)
{
// printf("hi1 %d %d\n",p,q);
if((p<x&&q<y)&&(p>=0&&q>=0)&&b[p][q]==0&&a[p][q]=='#'){
b[p][q]=1;
solve(a,b,p+1,q);
solve(a,b,p,q+1);
solve(a,b,p-1,q);
solve(a,b,p,q-1);
solve(a,b,p+1,q+1);
solve(a,b,p-1,q-1);
solve(a,b,p+1,q-1);
solve(a,b,p-1,q+1);

}
}
main()
{
      int t,b[201][201],i,j;
      char a[202][202];
      scanf("%d",&t);
      while(t--)
      {
      scanf("%d%d",&x,&y);
      count=0;
      memset(b,-1,sizeof b);
      for(i=0;i<x;i++)
      scanf("%s",a[i]);
      for(i=0;i<x;i++)
       for(j=0;j<y;j++)
      if(a[i][j]=='#')
      b[i][j]=0;
      
       // printf("hi\n");
         for(i=0;i<x;i++)
       for(j=0;j<y;j++)
       if(b[i][j]==0&&a[i][j]=='#'){
      solve(a,b,i,j);
      count++;}
     /* for(i=0;i<x;i++){
       for(j=0;j<y;j++)
       printf("%d ",b[i][j]);
       printf("\n");}*/
       
       printf("%d\n",count);
       }
       return 0;
       }
