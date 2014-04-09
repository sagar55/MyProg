 #include<stdio.h>
int a[100001],i,j,maximum1,u,ne,p,q,r,s;
int maximum(int i,int j)
{
        return i>j?i:j;}
typedef struct node
{
        int bestSum;
        int segmentSum;
        int bestPrefix;
        int bestSuffix;
        }node;
node b[262148];
void maketree(int n,int l,int h)
{
     int left,ryt;
     if(l==h)
     {   b[n].bestSum=a[l];b[n].bestPrefix=a[l];b[n].bestSuffix=a[l];b[n].segmentSum=a[l];
             }
     else
     {
         left=2*n;
         ryt=2*n+1;
         maketree(left,l,(l+h)/2);
         maketree(ryt,(l+h)/2+1,h);
        b[n].segmentSum = b[left].segmentSum + b[ryt].segmentSum;
		b[n].bestPrefix = maximum( b[left].segmentSum + b[ryt].bestPrefix , b[left].bestPrefix );
		b[n].bestSuffix = maximum( b[ryt].segmentSum + b[left].bestSuffix , b[ryt].bestSuffix );
		b[n].bestSum   = maximum( maximum( b[left].bestSum , b[ryt].bestSum) , b[left].bestSuffix + b[ryt].bestPrefix );
         }
}
int U(int n,int l,int h)
{
    int left=2*n,ryt=2*n+1;
    if(l!=h){
    if(i>=l&&i<=(l+h)/2)
    U(left,l,(l+h)/2);
    else
    U(ryt,(l+h)/2+1,h);
      b[n].segmentSum = b[left].segmentSum + b[ryt].segmentSum;
       b[n].bestPrefix = maximum( b[left].segmentSum + b[ryt].bestPrefix , b[left].bestPrefix );
		b[n].bestSuffix = maximum( b[ryt].segmentSum + b[left].bestSuffix , b[ryt].bestSuffix );
		 b[n].bestSum    = maximum( maximum( b[left].bestSum , b[ryt].bestSum) , b[left].bestSuffix + b[ryt].bestPrefix );
    }
    else
         {
         b[n].bestSum=a[l];b[n].bestPrefix=a[l];b[n].bestSuffix=a[l];b[n].segmentSum=a[l];}
} 
int Q(int n,int l,int h)
{
    int p2,q2,r2,s2,p3,q3,r3,s3,w,e;
     if(i>h||j<l)
    return -1;
    if(l>=i&&h<=j)
   {
        p=b[n].segmentSum;
        q=b[n].bestPrefix;
        r=b[n].bestSuffix;
        s=b[n].bestSum;
                       return 0;}
     w=Q(2*n,l,(l+h)/2);
     if(w!=-1)
     {
         p2=p;
         q2=q;
         r2=r;
         s2=s;
     }
     e=Q(2*n+1,(l+h)/2+1,h);
     if(e!=-1)
     {
         p3=p;
         q3=q;
         r3=r;
         s3=s;
     }
     if(w==-1)
     {
         p=p3;q=q3;r=r3;s=s3;
     }
    else if(e==-1)
     {
         p=p2;q=q2;r=r2;s=s2;
     }
     else
     {
        p=p2+p3;q=maximum(p2+q3,q2);r=maximum(p3+r2,r3);s=maximum(maximum(s2,s3),r2+q3);
     }
}
main()
{
      int n,x,l,h,k,sum,p,q,r,m=1,t,ans;
     scanf("%d",&k);
      for(x=1;x<=k;x++)
       scanf("%d",&a[x]);
       maketree(1,1,k);
      scanf("%d",&n);
        while(n--)
        { scanf("%d%d%d",&l,&i,&j);
        if(l==1){
                 Q(1,1,k);
         printf("%d\n",s);}
         else
         {
         a[i]=j;
         U(1,1,k);
          }
         }
         return 0;
         }

