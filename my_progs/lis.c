main()
{
      int a[100001],i,n,ls[100001],j,max,large;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      ls[0]=1;large=1;
      for(i=1;i<n;i++)
      {max=0;
      for(j=0;j<i;j++)
      { if(a[i]>a[j]&&ls[j]>max)
        max=ls[j];   
      }
      ls[i]=1+max;
      if(large<ls[i])
       large=ls[i];
      }
       printf("%d\n",large); 
      getch();
      }
