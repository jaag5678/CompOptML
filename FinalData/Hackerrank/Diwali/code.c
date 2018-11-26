#include<stdio.h>
int main()
{
    unsigned long long i,t;
    t = 992;
    for(i=0;i<t;i++)
    {
        unsigned long long j,n,prod=1;
        scanf("%llu",&n);
        for(j=0;j<n;j++)
        {
            prod *= 2;
            prod %= 100000;
        }
        printf("%llu\n",prod-1);
    }
    return 0;
}