#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
void multiply(long F[2][2], long M[2][2]);
void power(long F[2][2], int n);

int fibonacciNumber(int n)
{
    long F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    power(F, n - 1);

    return F[0][0] % mod;
}

void power(long F[2][2], int n)
{
    if (n == 0 || n == 1)
        return;
    long M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}

void multiply(long F[2][2], long M[2][2])
{
    long x = (F[0][0] * M[0][0]) % mod + (F[0][1] * M[1][0]) % mod;
    long y = (F[0][0] * M[0][1]) % mod + (F[0][1] * M[1][1]) % mod;
    long z = (F[1][0] * M[0][0]) % mod + (F[1][1] * M[1][0]) % mod;
    long w = (F[1][0] * M[0][1]) % mod + (F[1][1] * M[1][1]) % mod;

    F[0][0] = x % mod;
    F[0][1] = y % mod;
    F[1][0] = z % mod;
    F[1][1] = w % mod;
}