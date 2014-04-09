#include<stdio.h> 
#include<math.h>
#include<stdbool.h>
#define  size 10000005
int b[664580];
bool a[size];
void sieve()
{
       int i,j,k=0;
       b[k++]=2;
       for(i=4;i<size;i+=2) a[i]=1;
       for(i=3;i*i<size;i+=2)
               {  if(!a[i]){b[k++]=i;
               for(j=i*i;j<size;j+=i)
               a[j]=1;}
               }
return ;
}
main() 
{ 
int n,i,flag,m,k;
sieve();
while(scanf("%d",&n)!=EOF){
if(n==1)
 printf("1\n");
 else if(!a[n])
 printf("1 x %d\n",n);
    else{i=0; printf("1");k=n;
    m=(int)sqrt(n);
        while(k<=m)
               {
                       if(n%b[i]==0)
                       {
                               printf(" x %d",b[i]);
                               n=n/b[i];
                       }
                       else
                       i++;
                       if(n==1) break;
                       if(!a[n])
                       {
                        printf(" x %d",n);
                        break ;
                        }
               }
               printf("\n");
}
 
}
return 0;
}


