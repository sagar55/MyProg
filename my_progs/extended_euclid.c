#include <stdio.h>
int Extended_Euclid(int A, int B, int *X, int *Y)
{
    int x, y, u, v, m, n, a, b, q, r;
    /* B = A(0) + B(1) */
    x = 0; y = 1;
    /* A = A(1) + B(0) */
    u = 1; v = 0;
    for (a = A, b = B; 0 != a; b = a, a = r, x = u, y = v, u = m, v = n)
    {
        /* b = aq + r and 0 <= r < a */
        q = b / a;
        r = b % a;
        /* r = Ax + By - aq = Ax + By - (Au + Bv)q = A(x - uq) + B(y - vq) */
        m = x - (u * q);
        n = y - (v * q);
    }  
    /* Ax + By = gcd(A, B) */
    *X = x; *Y = y;
    return b;
}
main()
{
    int a, b, x, y, g;
    scanf("%d %d", &a, &b);
    g = Extended_Euclid(a, b, &x, &y);
    printf("X = %d; Y = %d; G = %d\n", x, y, g);
    getch();
}
