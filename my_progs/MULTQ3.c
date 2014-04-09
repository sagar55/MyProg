 #include<stdio.h>
 #include<stdbool.h>
 #define MAX 1000000
typedef struct node
{
        int val;
        int inc;
        bool flag;
        }node;
node a[MAX<<2];
int i,j;
void maketree(int n,int l,int h)
{
     if(l==h){
     a[n].val=1;
     a[n].inc=0;
     a[n].flag=0;
        }
     else
     { 
         maketree(2*n,l,(l+h)/2);
         maketree(2*n+1,(l+h)/2+1,h);
         a[n].val=a[2*n].val+a[2*n+1].val;
         a[n].flag=0;
         a[n].inc=0;
         }
        }
int U(int n,int l,int h)
{
    int p=n<<1,q=p+1,mid=(l+h)>>1;
    if(l>j||h<i)
    return 0;
    else if(i<=l&&j>=h){
         a[n].flag=!a[n].flag;
         //n].val=h-l+1-a[n].val;
         a[n].inc=(a[n].inc+1)%3;
         if((a[n].inc)%3==0)
                a[n].val=h-l+1;
         else
          a[n].val=h-l+1-a[n].val;
          return a[n].val;
         }
   else {
    if(a[n].flag==1){
         a[p].flag=!a[p].flag;
          a[q].flag=!a[q].flag;
         //a[p].val=mid-l+1-a[p].val;
         //a[q].val=h-mid-a[q].val;
         a[p].inc=(a[p].inc+1)%3;
         a[q].inc=(a[q].inc+1)%3;
         a[n].flag=0;
         if((a[p].inc)%3==0)
        a[p].val=mid-l+1;
        else
         a[p].val=mid-l+1-a[p].val;
         if((a[q].inc)%3==0)
          a[p].val=h-mid;
        else
         a[q].val=h-mid-a[q].val;
         }
        U(p,l,mid);
        U(q,mid+1,h);
         a[n].val=a[p].val+a[q].val;
}
}
int Q(int n,int l,int h)
{
     int p=n<<1,q=p+1,mid=(l+h)>>1;
         if(a[n].flag==1){
         a[p].flag=!a[p].flag;
          a[q].flag=!a[q].flag;
           a[p].inc=(a[p].inc+1)%3;
         a[q].inc=(a[q].inc+1)%3;
         a[n].flag=0;
         if((a[p].inc)%3==0)
        a[p].val=mid-l+1;
        else
         a[p].val=mid-l+1-a[p].val;
         if((a[q].inc)%3==0)
          a[p].val=h-mid;
        else
         a[q].val=h-mid-a[q].val;
            }
    if(i>h||j<l)
    return 0;
    if(l>=i&&h<=j)
      return a[n].val;
     return Q(p,l,mid)+Q(q,mid+1,h);
}     
main()
{
      int x,k,q,r,t; 
        freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 
     scanf("%d%d",&k,&t);
     maketree(1,1,k);
       while(t--){
       scanf("%d%d%d",&q,&i,&j); 
       i++;
       j++;
       if(q==0)
         U(1,1,k);   
         else
             printf("%d\n",Q(1,1,k));
              }
         return 0;
         }

