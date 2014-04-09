int main() // main always returns int!
{
 int a, b, c;
 for (a = 0; a<=1000; a++)
 {
  for (b = a + 1; b<=1000; b++) // no point starting from 0, otherwise you'll just try the same solution more than once. The condition says a < b < c.
  {
   for (c = b + 1; c<=1000; c++) // same, this ensures a < b < c.
   {
    if (((a*a + b*b == c*c) && ((a+b+c) ==1000))) // ^ is the bitwise xor operator, use multiplication for squaring
     printf("a=%d, b=%d, c=%d",a,b,c);
   }
  }
 }
 return 0;
}
