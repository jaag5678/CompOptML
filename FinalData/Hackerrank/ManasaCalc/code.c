#include<stdio.h>

unsigned long long int z = 1000000007;
unsigned long long int power(unsigned long long int K, unsigned long long int N ) {
    if(N == 1)
        return K % z;
    if(N == 0)
        return 1;
    if(N % 2)
        return ((K % z) * (power(K % z, N - 1) % z)) % z;
    return (((power(((K % z) * (K % z)) % z, N/2)) % z));
}        

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned long long int A[500], B[500];
    long long int p, a, b, cnt;
    int N;
    unsigned long long int Ans;
    
    N = 500;
    for(int i = 0; i < N; i++) {
        scanf("%lld%lld%lld", &p, &b, &a);
        a = a - b;
        A[i] = power(p, a);
        B[i] = power(p, b);
    }
    Ans = 1;
    cnt = 0;
    for(int i = 0; i < N; i++) {
        if(A[i] != 1) {
            cnt ++;
            Ans *= (A[i] + 1);
            Ans %= z;
        }    
    }
    for(int i = 0; i < N; i++) {
        Ans *= (B[i]);
        Ans %= z;
    }
    if(cnt)
        printf("%llu", Ans);
    else
        printf("%llu", 2 * Ans % z);
    return 0;
}
