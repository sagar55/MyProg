main()
{
      int t; double n,p;
      long long int j,m,k,q;
      scanf("%d",&t);
      while(t){
      scanf("%lf%lld",&n,&m);
      k=n;
       p=5;
      for(j=4;j<k;j++){
               p=round(p*1.618033988749895);
               q=(int)p;
               q=q%m;
               p=q;
               }
            printf("%lld\n",q);
            t--;
            }
getch();
}
