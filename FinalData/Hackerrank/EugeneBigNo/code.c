#include<stdio.h>


long long int powe(long long int N, long long int K, long long int M) {
    long long int A = 1;
    
    while(!(K & 1)) {
        N = N * N;
        N %= M;
        K >>= 1;
    }
    A = N;
    K >>= 1;
    while(K) {
        N = N * N;
        N %= M;
        if(K & 1)
            A = (A * N) % M;
        K >>= 1;
    }
    return A;
 }

long long int Func(long long int N, long long int C, long long int X, long long int M) {
    if(N == 1)
        return C;
    long long int Y1 = Func(N / 2, C, X, M) % M;
    //cout << Y1 << "\n";
    if(!(N % 2))
        return (Y1 * (powe(10, (N / 2) * X, M) + 1)) % M;
    return ((Y1 * (powe(10, (N / 2) * X, M)+ 1)) % M + (C * powe(10, (N - 1) * X, M)) % M) % M ;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    
    T = 195;
    
    while(T--) {
        long long int N, A, M;
        scanf("%lld%lld%lld", &A, &N, &M);
        
        if(A == 0) {
            printf("0\n");
            continue;
        }
        long long int T = A;
        int X = 0;
        while(T) {
            T /= 10;
            X++;
        }
        long long int C = A % M;
        printf("%lld\n", Func(N, C, X, M) );
        
    }
    
    return 0;
}
