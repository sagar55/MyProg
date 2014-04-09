#include<stdio.h>
int max(int i,int j)
{return i>j?i:j;}
int a[1000001],count;
int solve(int start,int end)
{
     printf("hi\n");
    int p,q,mid=(start+end)/2,l,m;
    if(start==end)
    return 0;
    else if(end==start+1)
    return max(a[end],a[start]);
    else if(end==start+2)
   {
         p=max(a[start],a[end-1]);
         q=max(a[start+1],a[end]);
         p=p+max(p,a[end]);
         q=q+max(a[start],q);
         if(p<q)
         return p;
         else 
         return q;
   }
   else
   {
       // printf("hi1\n");
    l=solve(start,mid);
    m=solve(mid+1,end);
    p=l+m+max(l,m);
    printf("p=%d\n",p);
    l=solve(start,mid+1);
    m=solve(mid+2,end);
    q=l+m+max(l,m);
      printf("q=%d\n",q);
    if(p<q)
      count+=p;
      else
      count+=q;
      return count;
    }
}
    
main()
{
 int i,n;
           scanf("%d",&n);
           for(i=0;i<n;i++)
           scanf("%d",&a[i]);
           printf("%d",solve(0,n-1));
           getch();
           }     
