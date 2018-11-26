#include<stdio.h>

int main()
{
    long long T, N, total;
    T = 684;
    while(T--)
    {
        scanf("%lld", &N);
        total = (N * (N - 1)) / 2;
        printf("%lld\n", total);
    }
    return 0;
}