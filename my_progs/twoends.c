#include<stdio.h>
int res[1005][1005];
int n;
int a[1005];
int max(int m,int n)
{ return m>n?m:n; }
int func(int i,int j){
    int p,q;
    if(res[i][j]!=-1)
        return res[i][j];
    if(i==j)
      return a[i];
        if(j==i+1)
         { res[i][j]=max(a[i],a[j]);
         return res[i][j];}
         if(a[i+1]>=a[j])
        p=a[i]+func(i+2,j);
         else
         p=a[i]+func(i+1,j-1);
         if(a[i]>=a[j-1])
        q=a[j]+func(i+1,j-1);
         else
         q=a[j]+func(i,j-2);
         if(p>q)
    res[i][j]=p;
    else
    res[i][j]=q;
    return res[i][j];
}
int main()
{
 
 int i,j,sum,ans,t=1;
scanf("%d",&n);
while(n!=0){
            sum=0;
 for(i=0;i<n;i++)
  {  scanf("%d",&a[i]);
  sum+=a[i];}
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            res[i][j]=-1;
 ans = func(0,n-1);
 printf("In game %d, the greedy strategy might lose by as many as %d points.\n",t++,2*ans-sum);
 scanf("%d",&n);}
  return 0; 
}
