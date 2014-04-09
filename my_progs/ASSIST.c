#include<stdio.h>
int luckies;
int lucky[3333];
void init_luckies(void){
     int islucky[35000];
     int i,j,c;
     for(i=2;i<35000;i++)
     islucky[i]=1;
     luckies=0;
     for(i=2;luckies<3000;i++)
     if(islucky[i]){
                    lucky[++luckies]=i;
                    for(j=i,c=0;j<35000;j++)
                    if(islucky[j]){
                                   if(c++==i){
                                              islucky[j]=0;
                                              c=1;
                                              }
                                              }
                                              }
                                              }
 main(){
     int n;
     init_luckies();
     while(1){
              scanf("%d",&n);
              if(!n)break;
              printf("%d\n",lucky[n]);
              }
              return 0;
              }
