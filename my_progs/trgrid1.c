#include<stdio.h>
main()
{
      int n,m,t;
      char v;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d%d",&n,&m);
                if(n==1)
                v='R';
                else if(m==1)
                v='D';
                else{
                if(m%2==1)
                {
                          if(n>m)
                          v='D';
                else if(n%2==1)
                 v='R';
                 else 
                 v='L';
                 }
                 else
                 {if(n>m)
                 v='U';
                 else if(n%2==1)
                 v='R';
                 else
                 v='L';
                 }}
                 printf("%c\n",v);}
                 return 0;
                 }
                   
                 
