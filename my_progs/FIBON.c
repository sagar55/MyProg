fast_fib(int n) {
int i,h,j,k,t;
i = h = 1;
j = k = 0;
while (n > 0) {
if (n%2 == 1) { // if n is odd
t = j*h;
j = i*h + j*k + t;
i = i*k + t;
}
t = h*h;
h = 2*k*h + t;
k = k*k + t;
n = (int) n/2;
} 
return j;}

main()
{
printf("%d",fast_fib(6));
}
