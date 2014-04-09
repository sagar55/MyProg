#include<stdio.h>
main()
{
      long long int m,i;
      int j,n,count,k,q,l;
      char a[20],b;
      scanf("%d",&n);
      b=getchar();
      while(n!=0)
      {
                 if(n>2)
                   {
                     i=360;
                     for(j=n;j>3;j--)
                        i=i*20;
                     }
                     else if(n==2)
                      i=20;
                      else
                       i=1;
                       m=0;
              for(k=n;k>0;k--)
               {
                              count=0;
                             gets(a);
                            l=strlen(a);
                            for(q=0;q<l;q++)
                              {  if(a[q]=='.')
                                  count=count+1;
                                  else if(a[q]=='-')
                                  count=count+5;
                                  }
                     m=m+count*i;
                     if(k!=3){
                     i=i/20;}
                     else if(k==3)
                     i=20;
                     }
                     printf("%lld\n",m);
                   scanf("%d",&n);
                   b=getchar();
                   }
                   return 0;
                   }   
                                  
                          
