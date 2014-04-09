#include <iostream>
#include <assert.h>

// finds the n (second arg) fisrt prime numbers
// and save them in the array (first arg).
extern void FillPrimeArray (int *, int );

using namespace std;



int main ()
{
const int rows = 20;
const int cols = 5;

// n is automatically adjusted with rows and cols
const int n = rows * cols;
int table [n];

// Find the prime numbers.
FillPrimeArray (table, n);

// display result in tabular format:

// for rows row
for (int i = 0; i < rows; i++)
{
// for cols column
for (int j = 0; j < cols; j++)
{
cout << table [i * cols + j] << '\t';
}

cout << "\n";
}

cout << endl;
scanf("%d",&rows);
return 0;
}

// finds the n (second arg) fisrt prime numbers
// and save them in the array (first arg, table).
void FillPrimeArray (int * table, int n)
{
// assert n is greater than zero and table is valid (not checked if wild pointer!)
assert (n > 0);
assert (table != NULL);

// The first prime number is 2, and count becomes 1.
int count = 0;
table [count++] = 2;

// Starting from 3, look for all numbers above 2 to find the prime numbers
for (int number = 3; count < n; number++)
{
// assume prime unless the reverse is proved.
bool prime = true;

// Check up to SQRT (number) [conceptually] to check if 
// number is really prime.
for (int i = 0; number / table [i] >= table [i]; i++)
{
// If a member in list is a divisor, then this number is 
// not prime
if (number % table [i] == 0)
{
prime = false;
break;
}
}

// If loop terminated, and this number is prime,
// then add it to the list:
if (prime)
{
table [count++] = number;
}
}
}
