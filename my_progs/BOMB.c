main()
{
      int i,j,t,n,count;
      char a[1001],b[1001];
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                scanf("%s",a);
                for(i=0;i<n;i++)
                b[i]=0;
                if(n==1)
                {if(a[0]==49)
                b[0]=-1;
                }
                else{
                if(a[0]==49){
                b[0]=-1;b[1]=-1;
                }
                for(i=1;i<(n-1);i++)
                {if(a[i]==49)
                { b[i-1]=-1;
                  b[i]=-1;
                  b[i+1]=-1;
                  }
                  }
                if(a[n-1]==49)
                {
                 b[n-1]=-1;
                b[n-2]=-1;}}count=0;
                for(i=0;i<n;i++)
                {
                if(b[i]==0)
                   count++;
                   }
                   printf("%d\n",count);
                   }
                   return 0;
                   }
                   
                
                
