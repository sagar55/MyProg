main()
{
      int i,j,k,n,a[20];
      scanf("%d",&n);
      for(i=0;i<n;i++)
           scanf("%d",&a[i]);
           i=0;
           j=n-1;
          k=n/2; 
          while((j-i)!=1)
          {
                         if(a[k]>a[k+1])
                           j=k;
                           else
                           i=k+1;
                           k=(i+j)/2;
                           }
             if(a[i]>a[j])
             n=a[i];
             else
             n=a[j];
             printf("%d",n);
             getch();
             }
                           
      
