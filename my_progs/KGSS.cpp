#include<stdio.h>
int a[100001],b[262148],i,j,max1,u,ne;
void maketree(int n,int l,int h)
{
     if(l==h)
        b[n]=l;
     else
     { 
         maketree(2*n,l,(l+h)/2);
         maketree(2*n+1,(l+h)/2+1,h);
         if(a[b[2*n]]>=a[b[2*n+1]])
         b[n]=b[2*n];
         else
         b[n]=b[2*n+1];
     }
}

int Q(int n,int l,int h)
{
    int p,q;
      if(i>h||j<l)
        return -1;
      if(l>=i&&h<=j)
        return b[n];
     p=Q(2*n,l,(l+h)/2);
     q=Q(2*n+1,(l+h)/2+1,h);
      if(p==-1)
              return q;
      else  if(q==-1)
        return p;
      else  if(a[p]>a[q])
        return p;
      else 
        return q;
}
int U(int n,int l,int h)
{
    if(l!=h){
    if(i>=l&&i<=(l+h)/2)
    U(2*n,l,(l+h)/2);
    else
   U(2*n+1,(l+h)/2+1,h);
    if(a[b[2*n]]>a[b[2*n+1]])
    b[n]=b[2*n];
    else
    b[n]=b[2*n+1];
    }
}    
main()
{
      int n,x,l,h,k,sum,p,q,r,m;
      char c[2];
     scanf("%d",&n);
          k=n;
      for(x=1;x<=n;x++)
       scanf("%d",&a[x]);
       maketree(1,1,n);
        scanf("%d",&n);
        while(n--)
        { scanf("%s%d%d",c,&i,&j);
        if(c[0]=='Q'){
        if(j==i+1)
        printf("%d\n",a[j]+a[i]);
        else{
        m=j;
        max1=0;
         p=Q(1,1,k);
         max1=a[p];
         if(p==i)
         {     i=p+1;
            if(i==j)
            q=r=i; 
            else
                 q=r=Q(1,1,k);}
                 else if(p==j)
          { j=p-1;
           if(i==j)
            q=r=i;
            else
          q=r=Q(  1,1,k);}
          else{     
         j=p-1;
         if(i==j)
         q=i;
         else
         q=Q(1,1,k);  
        i=p+1;j=m;
        if(i==j)
          r=i;
          else
         r=Q(1,1,k);}
         if(a[q]>a[r])
               sum=max1+a[q];
               else
               sum=max1+a[r];         
         printf("%d\n",sum);}}
         else{
              int d;
              a[i]=j;
              U(1,1,k);
              }
         }
         return 0;
         }
