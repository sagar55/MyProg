 #include<stdio.h>
 #include<stdbool.h>
 #define MAX 1000000
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
         a[n].val=h-l+1-a[n].val;
                                    return a[n].val;
         }
   else {
    if(a[n].flag==1){
         a[p].flag=!a[p].flag;
          a[q].flag=!a[q].flag;
         a[p].val=mid-l+1-a[p].val;
         a[q].val=h-mid-a[q].val;
         a[n].flag=0;
         }
        U(p,l,mid);
        U(q,mid+1,h);
         a[n].val=a[p].val+a[q].val;
}
}
int Q(int n,int l,int h)
{
     int p=n<<1,q=p+1,mid=(l+h)>>1;
    if(i>h||j<l)
    return 0;
    if(l>=i&&h<=j)
      return a[n].val;
     return Q(p,l,mid)+Q(q,mid+1,h);
}     
main()
{
      int x,k,q,r,t; 
      
     scanf("%d%d",&k,&t);
       while(t--){
       scanf("%d%d%d",&q,&i,&j); 
       if(q==0)
         U(1,1,k);   
         else
             printf("%d\n",Q(1,1,k));
              }
         return 0;
         }

