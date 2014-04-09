#include<stdio.h>
main()
{
      int i,j,k,m,n,count,p,flag=0;
      char a[1000];
      scanf("%d%d\n",&m,&n);
      for(i=1;i<=m;i++){
      scanf("%s",&a[i]);
      }
      count=1;
      p=1;
      for(i=0;i<n;i++)
      {
              scanf("%d",&j);
             if(a[p]=='+'&&(p+j)<=m){
                p=p+j;flag=1;}
              else if(a[p]=='-'&&(p-j)>=1){
              p=p-j;flag=1;}
              if(p==1&&flag==1){       
              count++;}
              flag=0;
              }
              printf("%d\n",count);
              return 0;
              }          
