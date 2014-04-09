#include<stdio.h>
#include<string.h>
 
main()
{
      int count,t,l,i,a[60],k=1;
      char p,q;
      scanf("%d",&t);
      while(t){
               count=0;
for(i=0;i<60;i++)
a[i]=0;        if(k==1){
               p=getchar ();k--;}
                p=getchar ();
while(p!='\n'){
                               if(a[p-65]==0)
               a[p-65]=a[p-65]+1;
        p=getchar ();
               }
              q=getchar ();
 
               while(q!='\n'){
 if(a[q-65]!=0)
               count++;
q=getchar ();}
               printf("%d\n",count);
               t--;
               }
return 0;
} 
