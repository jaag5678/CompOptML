#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isprime(unsigned long long n) {
    unsigned long long i;
    for (i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    unsigned int q;
    unsigned long long n;
    unsigned long long i, p;
    unsigned int c;
   
    q = 100000;
    while(q--) {
        scanf("%llu", &n);
        p = 1;
        c = 0;
        for (i = 2;; ++i) {
            if (!isprime(i))
                continue;
            if (p > n / i)
                break;
            p *= i;
            ++c;
        }
        printf("%u\n", c);
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}