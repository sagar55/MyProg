int j;
Rselect(int a[],int l,int r,int x)
{             // if x is outOfRange return -1
        if(x < 1 || x > r) return -1; 
                 
        if(l==r) return a[l];
        if(l < r)  
        { 
          // divide and conquer 
           int j = partition( a, l, r); 
           int k = j-l+1;
           if(k == x) 
               return a[j];
           else if(x < k) 
               return Rselect( a, l, j-1, x); 
           else
               return Rselect( a, j+1, r, x-k); 
        }
        return -1;
    }
     
int partition ( int a[ ], int l, int r )
{
    int i,j,p,temp,mid,median;
    mid=(l+r)/2;
    if(a[l]>a[mid]&&a[l]<a[r]||a[l]<a[mid]&&a[l]>a[r])
    median=l;
    else if(a[r]>a[mid]&&a[r]<a[l]||a[r]<a[mid]&&a[r]>a[l])
    median=r;
    else
    median=mid;
    temp=a[l];
    a[l]=a[median];
    a[median]=temp;
    p=a[l];
    i=l+1;
    for(j=l+1;j<=r;j++)
    { if(a[j]<p)
    { temp=a[i];
     a[i]=a[j];
     a[j]=temp;
     i++;}
     }
     temp=a[i-1];
     a[i-1]=a[l];
     a[l]=temp;
     return i-1;
     }
     
     main()
{
      int n=0,j,a[100001],i,p,t,flag=0,m;
      char c[5],x;
      float f;
       scanf("%d",&t);
    j=1;
    while(t--)
    {
              flag=0;
              scanf("%s%d",c,&p);
              if(c[0]=='r'&&n==0)
              printf("Wrong!\n");
              else if(c[0]=='r'){
                   for(i=1;i<=n;i++)
                    { {if(a[i]==p)
                     flag=1;
                     a[i]=0;
                     break;}
                     }
                     if(flag==0)
                      printf("Wrong!\n");
                      else{
               if(n%2==0)
      {i=n/2;
       m=Rselect(a,1,n,i);
        m+=Rselect(a,1,n,i+1);
        if(m%2==0)
         printf("%d\n",m/2); 
         else{
            f=(float)m/2;
            printf("%.1f\n",f);  }
         }
      else
      {i=(n+1)/2;
      m=Rselect(a,1,n,i);
       printf("%d\n",m);
      }
     }}
              else {
                   n++;
                   a[n]=p;
      if(n%2==0)
      {i=n/2;
       m=Rselect(a,1,n,i);
        m+=Rselect(a,1,n,i+1);
        if(m%2==0)
         printf("%d\n",m/2); 
         else{
            f=(float)m/2;
            printf("%.1f\",f);  }
         }
      else
      {i=(n+1)/2;
      m=Rselect(a,1,n,i);
       printf("%d\n",m);
      }}}
      getch();
      }
