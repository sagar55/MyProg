int gcd(int i,int j)
      {
           if(j==0)
            return i;
            else
              return gcd(j,i%j);
              }
              main()
              {
                    int i,j,t,n,m,count,k;
                    scanf("%d",&t);
                    while(t--)
                    {
                    count=0;
                    scanf("%d%d",&m,&n);
                    for(i=1;i<m;i++)
                    {
                    j=gcd(i*n,n);
                     k=gcd(i,i*n);
                     printf("%d %d\n",j,k);
                   
                    if(j<=m&&j>i||k<=m&&k>i)
                    count++;
                    }
                    printf("%d\n",count);
                    }
                    return 0;
                    }
                    
