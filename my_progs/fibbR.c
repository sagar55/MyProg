int fibbR(int n)
{
    if(n==1||n==2)
    return 1;
    else
    return fibbR(n-1)+fibbR(n-2);
}
main()
{
      int n;
      scanf("%d",&n);
      printf("%d",fibbR(n));
      getch();
      }
