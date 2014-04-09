int min(int  x,int  y)
{
    return x>y?y:x;
}
main()
{
      int a[251][251],path[251][251],i,j,k,n,m,s,g,d;
      scanf("%d",&n);
      for(i=0;i<n;i++)
        for(j=0;j<n;j++)
          { scanf("%d",&a[i][j]);
           path[i][j]=a[i][j];
           }
       for(k=0;k<n;k++)
        for(i=0;i<n;i++)
          for(j=0;j<n;j++)
             path[i][j] = min ( path[i][j], path[i][k]+path[k][j] );
           scanf("%d",&m);
           while(m--)
           {
                 scanf("%d%d%d",&s,&g,&d);
                 i=path[s][g]+path[g][d];
                 j=i-a[s][d];
      
                  printf("%d %d\n",i,j);
                  }      
          getch();
          }
