#include<stdio.h>
main()
{
int t,n,i,j,k,p,q,r,b[101],count,min;
char a[101][101];
scanf("%d",&t);
while(t--)
{   count=0;
          scanf("%d%d%d",&p,&q,&r);
          for(i=0;i<101;i++)
          b[i]=0;
          for(i=0;i<p;i++)
             scanf("%s",a[i]);
             for(i=0;i<p;i++)
              for(j=0;j<q;j++)
             if(a[i][j]=='*')
               b[i]++;
               for(i=0;i<r;i++)
           {   min=1001;
               for(j=0;j<p;j++)
               if(b[j]<min)
                { min=b[j];
                  n=j;
                  }
                  b[n]=q-b[n];
                  }
                  for(i=0;i<p;i++)
                  count+=b[i];
                  printf("%d\n",count);
                  }
                  return 0;
                  }
               
