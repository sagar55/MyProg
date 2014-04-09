#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
typedef struct node
{
        int val;
        bool flag;
        }node;
node a[MAX<<2];
int i,j;
int U(int n,int l,int h)
{
    int p=n<<1,q=p+1,mid=(l+h)>>1;
    if(l>j||h<i)
    return 0;
    else if(i<=l&&j>=h){
         a[n].flag=!a[n].flag;
         a[n].val=a[n].val+ss;
         return a[n].val;
         }
   else {
    if(a[n].flag==1){
         a[p].flag=!a[p].flag;
          a[q].flag=!a[q].flag;
          a[p].val=a[p].val+ss;
         a[q].val=a[q].val+ss;
         a[n].flag=0;
         }
        U(p,l,mid);
        U(q,mid+1,h);
         a[n].val=a[q].val;
}
}
int Q(int n,int l,int h)
{
     int p=n<<1,q=p+1,mid=(l+h)>>1;
         if(a[n].flag==1){
         a[p].flag=!a[p].flag;
          a[q].flag=!a[q].flag;
         a[p].val=a[p].val+a[n].val;
         a[q].val=a[q].val+a[n].val;
         a[n].flag=0;
         }
    if(i>h||j<l)
    return 0;
    if(l>=i&&h<=j)
      return a[n].val;
     return Q(q,mid+1,h);
}     
main()
        {
            int i,nn;
            float A=0,j,k,n=1;
           scanf("%d",&nn);
           while(nn--)
           {
                scanf("%d",&i);
                if(i==1)
                {
                    scanf("%f%f",&j,&k);
                    A+=(j*k)/n;
                   U(n,1,k);
                }
                else if(i==2)
                {
                    scanf("%f",&j);
                    A=(n*A+j)/(n+1);
                    n++;
                  //  last[(int)n]=j;
                    U(n,1,k);
                }
                else
                {
                    A=(n*A-Q(n,n,n)])/(n-1);
                    n--;
                }
                printf("%f\n",A);
            }
                 
    return 0;
      }
      



