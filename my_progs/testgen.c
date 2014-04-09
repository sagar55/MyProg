#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MOD 100000
int main()
{
    freopen("input.txt","w",stdout);
    srand((unsigned)(clock()));
    int T=50000,i;
  //  int k=50;
   // printf("%d\n",T);
    while(T--)
    {
      //  int p=rand()%T,q=p+rand()%(T-p);
      //  printf("%d %d %d\n",rand()%2,p,q);
      /*
      printf("%d\n",rand()%20);

        for(i=0;i<9;i++)
        printf("%d ",1+rand()%10);
        printf("\n");
        */

           //   int upper=1+rand()%10;
              //int d=rand()%1000000000;
             //     int N=1+rand()%40;
            //  int m=rand()%N;
        //      printf("%d\n",upper);
            //  printf("%d\n",2+rand()%(N/2));
             /* int i,x; for(i=0;i<N;i++) {
                  x=(rand()&1?1:-1)*((((long long)rand())*rand())%MOD); printf("%d ",x);
              } printf("\n");
              */
              /*
                int i,x,y;
         x=(rand()&1?1:-1)*(rand()%MOD);
                  printf("%d ",x);
             for(i=1;i<N;i++){
                //  x=rand()%MOD; 
                y=x+(rand()&1?1:-1)*rand()%101;
                  printf("%d ",y);
                  x=y;
              } printf("\n");
              */
              /*
              int n=rand()%1000;
              printf("%d\n",n);
              long long x=1e18;
              for(i=0;i<n;i++)printf("%lld ",rand()%x);
                printf("\n");
                printf("%lld %lld %lld\n",rand()%x,rand()%x,2+rand()%x);
              for(i=0;i<n;i++){
                char c;
                int y=rand()%6;
                if(y==0||y==1) c='A';
                else if(y<=4)c='M' ;
                  else c='R';
              printf("%c",c);}
              printf("\n");
              */
            int l1;
            l1=1+rand()%100;
            for(int i=0;i<l1;i++) {int j=97+rand()%3;printf("%c",j);}
              printf("\n");
            l1=1+rand()%l1;
            for(int i=0;i<l1;i++) {int j=97+rand()%3;printf("%c",j);}
              printf("\n\n");
            

              
    }
    return 0;
}



