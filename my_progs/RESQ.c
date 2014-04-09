#include<stdio.h>
#include<math.h>
main()
{
      int i,j,k,n,m,t;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                m=sqrt(n);
                j=m*m;
                if(j==n)
                printf("0\n");
                else
                {
                    for(i=m;i>=1;i--){
                     if(n%i==0)
                     {
                          k=n/i-i;  
                          if(k<0)
                          k=-k;
                        printf("%d\n",k);
                        break;
                        }}}}
                        return 0;                        
                        }
