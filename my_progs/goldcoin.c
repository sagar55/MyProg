  #include<stdio.h>
      int m[100000]={0};
      unsigned long int max(int n)
	{
	int val;
	unsigned long int s=0;
	if(n<=11)
	return n;
      if(n>=0&&n<=1000)
	{
      if(m[n])
	return m[n];
      else
      {
      s=max(n/2)+max(n/3)+max(n/4);
 	if(s>n)
      m[n]=s;
	else
	m[n]=n;
      return m[n];
      }
      }
     else
	{
	s=max(n/2)+max(n/3)+max(n/4);
	if(s>n)
     	 val=s;
	else 
	val=n;
 return val;	}
 }
      int main()
      {
      unsigned long int  n;
      while(scanf("%lu",&n)!=EOF)
      {
      printf("%lu\n",max(n));
      }
return 0;
}
