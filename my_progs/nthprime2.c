#include<stdbool.h>
bool a[100000001];
int i,j,k=1,b[10001];
main()
{  
       for(i=2;i<10001;i++)
                    if(!a[i]){
                          b[k++]=i;   
                    for(j=i*2;j<10001;j+=i)
                     a[j]|=1;}
                     
       while(scanf("%d",&i))
                printf("%d\n",b[i]);                         
                 exit(0);}
      
