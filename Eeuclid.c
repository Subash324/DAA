/*
function extended_gcd(a, b)
    s <- 0;    old_s <- 1
    t <- 1;    old_t <- 0
    r <- b;    old_r <- a
    while r ≠ 0
        quotient <- old_r div r
        (old_r, r) <- (r, old_r - quotient * r)
        (old_s, s) <- (s, old_s - quotient * s)
        (old_t, t) <- (t, old_t - quotient * t)
    output "Bézout coefficients:", (old_s, old_t)
    output "greatest common divisor:", old_r
    output "quotients by the gcd:", (t, s)
*/
#include <stdio.h>
int gcdExtended(int a, int b, int *x, int *y)
{

    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}


int main()
{
    int x, y;
    int a, b;
    printf("Enter two numbers a and b\n");
    scanf("%d%d",&a,&b);
    int g = gcdExtended(a, b, &x, &y);
    printf("gcd(%d, %d) = %d", a, b, g);
    return 0;
}
