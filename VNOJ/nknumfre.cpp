#include <stdio.h>

int gcd(int a, int b) 
{
    return b ? gcd(b, a % b) : a; 
}

int rev(int a) 
{
    int res = 0; 
    while (a > 0) 
    {
        res *= 10; 
        res += (a % 10); 
        a /= 10; 
    }
    return res; 
}

int main() 
{
    int a, b; 
    int res = 0; 
    scanf("%d%d", &a, &b); 
    for (int i = a; i <= b; i++) 
    {
        if (gcd(i, rev(i)) == 1) 
            res++; 
    }

    printf("%d", res); 

    return 0; 
}
