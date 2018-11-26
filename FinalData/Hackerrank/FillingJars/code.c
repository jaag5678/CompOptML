#include<stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int N, M;
    long long int a, b, c;
    long long unsigned int TOT = 0;
    
    N = 10000000;
    M = 100000;
    
    while(M--) {
        scanf("%lld%lld%lld", &a, &b, &c);
        TOT += (b - a + 1) * c;
    }
    if(!(TOT % N))
        printf("%llu\n", TOT / N);
    else
        printf("%llu\n", (TOT - 1) / N);
    return 0;
}
