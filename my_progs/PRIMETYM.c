#include<stdio.h>
#include<stdbool.h>
#include<math.h>
  bool a[10001];
  int b[1300],c[1300][2];
void f(){
      int m,i,j=0,n,t,k=2,l;
    
       n=10000;
       m=100;  
       for(i=2;i<=m;i++)
           { k=2;
                    if(a[i]==0){
                        while(i*k<=n)
                        {       if(a[i*k]==0)
                                 a[i*k]=1;
                                 k++;}}}
                                  for(i=2;i<=n;i++)                       
                              if(a[i]==0)
                               b[j++]=i;
                                 }
main()
{
      int i,j,k,n,p;
      f();
      while(scanf("%d",&n)!=EOF)
      {
          i=0;
          while(b[i]<=n&&b[i]!=0)
          {
            k=0;p=n;
            while(p>=1)
            {  
            k+=p/b[i];
            p/=b[i];}
               c[i][0]=b[i];
               c[i][1]=k;
               i++;
               }
               for(j=0;j<i-1;j++)
               printf("%d^%d * ",c[j][0],c[j][1]);
               printf("%d^%d\n",c[j][0],c[j][1]);                                                       
                }
                return 0;
                }                        
