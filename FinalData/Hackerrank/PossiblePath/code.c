#include<stdio.h>

unsigned long long int gcd (unsigned long long int a, unsigned long long int b) {
    while(1) {
        if(a > b)
            a = a % b;
        else 
            b = b % a;
        if(a == 0)
            return b;
        if(b == 0)
            return a;
    }   
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    unsigned long long int a, b, x, y, g1, g2;
    
    T = 100;

    while(T--) {
        
        scanf("%llu%llu%llu%llu", &a, &b, &x, &y);
        
        g1 = gcd(a, b);
        g2 = gcd(x, y);
        
        if(g1 == g2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
