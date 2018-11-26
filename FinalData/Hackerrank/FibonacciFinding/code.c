#include <stdio.h>
long long int N = 1000000007;
void multiply(long long int F[2][2],long long int M[2][2]);

void power(long long int F[2][2],long long int n);

long long int fib(long long int n,long long int f1, long long int f0) {
    long long int F[2][2] = {{1,1},{1,0}};
    if (n == 0)
        return 0;
    power(F, n);
    long long int fn = F[1][0]*f1 + F[1][1]*f0;
    return fn;
}

void power(long long int F[2][2],long long int n) {
    if( n == 0 || n == 1)
        return;
    long long int M[2][2] = {{1,1},{1,0}};

    power(F, n/2);
    multiply(F, F);

    if (n%2 != 0)
        multiply(F, M);
}

void multiply(long long  int F[2][2], long long int M[2][2]) {
   long long  int x =  F[0][0]*M[0][0] % N + F[0][1]*M[1][0] % N;
   long long  int y =  F[0][0]*M[0][1] % N + F[0][1]*M[1][1] % N ;
   long long  int z =  F[1][0]*M[0][0] % N + F[1][1]*M[1][0] % N;
   long long  int w =  F[1][0]*M[0][1] % N + F[1][1]*M[1][1] % N;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n, a, b;
    long long int t;
    t = 880;
    while(t--) {
        scanf("%lld %lld %lld", &a, &b, &n);
        fib(n, b, a)%(N);
    }
    return 0;
}
