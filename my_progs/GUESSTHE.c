#include<stdio.h>
#include<string.h>
long long int gcd(long long int i,long long int j)
      {
           if(j==0)
            return i;
            else
              return gcd(j,i%j);
              }
main()
{
    long long int m,n,i,t,l;
    char a[25];
    scanf("%s",a);
    while(a[0]!='*')
    {
       l=strlen(a);
                     if(a[0]!='Y')
                     m=-1;
                     else
                     {
                         m=1;
                         for(i=1;i<l;i++)
                     {  if(a[i]=='Y')
                       { n=i+1;
                       m=(m*n)/gcd(m,n);
                       }
                       }
                       for(i=1;i<l;i++)
                       { if(a[i]=='N'&&(m%(i+1))==0)
                         {m=-1;
                         break;}
                         }}
                         printf("%d\n",m);
                           scanf("%s",a);
                         }
                         return 0;
                         }
                          
                         
                                              
