#include<stdio.h>

unsigned long long int power(unsigned long long int K, unsigned long long int N , unsigned long long int p) {
    if(N == 1)
        return K % p;
    if(N == 0)
        return 1;
    if(N % 2 == 1)
        return (K % p) * (power(K % p, N - 1, p) % p);
    return (power(((K % p)* (K % p)) % p, N / 2, p) % p);
}       

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int T, A, M;
    
    T = 60280;
    while(T--) {
        scanf("%lld%lld", &A, &M);
        if(A == 0) {
            printf("YES\n");
            continue;
        }
        unsigned long long int X = power(A, (M - 1) / 2, M);
        //printf("%lld\n", X);
        //if(X % M == 1)
            //printf("YES\n");
            //printf("NO\n");
    }
    return 0;
}
