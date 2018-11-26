#include<stdio.h>

unsigned long long int z = 1000000007;

unsigned long long int power(unsigned long long int t, unsigned long long int n) {
    if(n == 0)
        return 1;
    if(n == 1)
        return t;
    if(n % 2)
        return (t % z)*power(t, n - 1);
    return ((power(((t % z) * (t % z)) % z, n / 2))) % z;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    unsigned long long int T[100000];
    unsigned long long int K;
    
    N = 100000;
    for( int i = 0 ; i < N; i++) {
        scanf("%llu", &K);
        T[i++] = K;
    }
    K = 1;
    
    for(int i = 0; i < 100000; i++) {
        K *= (power(2, T[i]) + 1);
        //cout << K << endl;
        K %= z;
    }
    K --;
    printf("%llu\n", K);
    
    return 0;
}
