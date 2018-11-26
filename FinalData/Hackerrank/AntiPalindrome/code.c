#include<stdio.h>

unsigned long long int z = 1000000007;
unsigned long long int power(unsigned long long int K, unsigned long long int N ) {
    if(N == 1)
        return K % z;
    if(N == 0)
        return 1;
    if(N % 2)
        return (((K % z) * (power(K % z, N - 1) % z)) % z);
    return (power((((K % z) * (K % z)) % z), N / 2) % z);
}        
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int T;
    unsigned long long int N, M, A;
    
    T = 100000;
    while(T--) {
        scanf("%llu%llu", &N, &M);
        if(N == 1) {
            scanf("%llu\n", &M);
            continue;
        }
        if(N == 2) {
            printf("%llu\n", M * (M - 1) % z );   
            continue;
        }
        A = 1;
        A = (A * (M) * (M - 1)) % z;
        N -= 2;
        M -= 2;
        while(N) {
            if(N == 1)
                break;
            if(N % 2) {
                A = (A * M) % z;
                N--;
            }
            else {
                M = (M * M) % z;
                N /= 2;
            }
        }
        A *= M % z;
       printf("%llu\n", A % z);
        
    }
    return 0;
}
