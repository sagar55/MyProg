  long long int result = 1,MOD=1000000007;
  power(long long int x,long long int n)
  {
  while(n>0)
    { 
        if(n%2==1)
      result=(result*x)%MOD;
      x=(x*x)%MOD;
      n/=2;
}
  return result;
}
main()
{
    long long int base,pow;
    scanf("%lld%lld",&base,&pow);
    printf("%lld",power(base,pow)); 
    getch();
}
