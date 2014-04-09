 #include<stdio.h>
int a[262148],i,j;
int U(int n,int l,int h)
{
   if(l==h)
   { if(l>=i&&h<=j) 
     a[n]=!a[n];
       return a[n];}
   a[n]=U(n<<1,l,(l+h)>>1)+U((n<<1)+1,((l+h)>>1)+1,h);
    return a[n];
   
}
int Q(int n,int l,int h)
{
    int p,q;
    if(i>h||j<l)
    return 0;
    if(l>=i&&h<=j)
      return a[n];
     p=Q(n<<1,l,(l+h)>>1);
     q=Q((n<<1)+1,((l+h)>>1)+1,h);
    return p+q;
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
