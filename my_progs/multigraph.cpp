#include<cstdio>
#include<iostream>
#include<algorithm>
 
using namespace std;
 
main()
{
      
               int d[10][10],a[10][10][10],i,j,k,n,stage[10]={1,1};
               for(i=1;i<=10;i++)
               for(j=1;j<=10;j++)
               for(k=1;k<=10;k++)
              { a[i][j][k]=100;
              d[i][j]=100;
              }
              printf("enter no of stages\n");
               cin>>n;
               for(i=2;i<=n;i++)
               {
               cout<<"enter no. of vertices in stage "<<i<<"\n";
               cin>>stage[i];
               cout<<"enter edge lengths for vertices between stages"<<i-1<<"& "<<i<<"\n";
               cout<<"enter -1 for break;\n";
                cin>>j;
               while(j!=-1){
                            cin>>k>>a[i-1][j][k];
                            cin>>j;
               }
               }
               d[1][1]=0;
               for(i=2;i<=n;i++)
               for(k=1;k<=stage[i];k++)
               for(j=1;j<=stage[i-1];j++)
               d[i][k]=min(d[i][k],d[i-1][j]+a[i-1][j][k]);
               cout<<"minimum length from stage 1 to stage "<<n<<" "<<d[1][n]<<"\n";
               }
               /*
4
3
1 1 1
1 2 2
1 3 5
-1
3
1 1 4
1 2 11
2 1 9
2 2 5
2 3 16
3 3 2
-1
1
1 1 18
2 1 13
3 1 2
-1
*/
