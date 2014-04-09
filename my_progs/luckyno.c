#include<stdio.h>
main()
{
      int t;
      long long int n,q,m;
      scanf("%d",&t);
      while(t)
      {
              scanf("%lld",&n);
              if((n%7==0)&&(n%4==0)||(n%7==0))
              {
                                    printf("%lld\n",n);}
                                         else if(n%4==0)
                                         {
                                              printf("0\n");}
                       else
                       {
                           q=n/7;
                           m=q*7;
                           while(m!=0){
                           if((n-m)%7==0||(n-m)%4==0)
                           {
                               printf("%lld\n",q*7);
                               break;
                               }
                           else
                           {n=n-4;
                           q=n/7;
                           m=q*7;
                           }}
                           if(m==0)
                           printf("-1\n");
                            }
                            t--;}
                            getch();
                            }                       
