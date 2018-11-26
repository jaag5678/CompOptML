#include<stdio.h>

long long int gcd(long long int a, long long int b) {
    if(!b)
        return a;
    return gcd(b, a % b);
}

long long int lcm(long long int a, long long int b) {
    return ((a * b) / gcd(a, b));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    long int N;
    
    T = 10;
    
    while(T--) {
        scanf("%ld", &N);
        long long int a, b;
        
        scanf("%lld", &a);
        printf("%lld ", a);
        N--;
        while(N--) {
            scanf("%lld", &b);
            printf("%lld ", lcm(a, b));
            a = b;
        }
        printf("%lld\n", b);
    }
    return 0;
}
