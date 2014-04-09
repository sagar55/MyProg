#include<stdio.h>
char p[2000];
long long int b;
main(){int t,i,a,j;scanf("%d",&t);
while(t--)
{scanf("%s%lld",p,&b);i=strlen(p);a=p[i-1]-48;j=b&3;
if(b==0&&a!=0) printf("1\n");else{if((a==0)||(a==1)||(a==5)||(a==6)) printf("%d\n",a);if((a==2)||(a==8)||(a==3)||(a==7)){
         if(j==1) printf("%d\n",a);if(j==2){if(a%2)printf("9\n");else printf("4\n");}if(j==3){if(a==2) printf("8\n"); 
         if(a==3)printf("7\n");if(a==7)printf("3\n");if(a==8) printf("2\n");}if(j==0){if(a%2)printf("1\n");else printf("6\n");}}
         if(a==4||(a==9)){
          if(b&1){if(a==4)printf("4\n");else printf("9\n");}else{if(a==4)printf("6\n");else printf("1\n");}}}}return 0;}



