#include<stdio.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int N, t, SUM, ROT;
    long long int T[100000];
    
    N = 100000;
    SUM = 0;
    ROT = 0;
    for(size_t i = 0; i < N; i++) {
        scanf("%lld", &t);
        T[i] = t;
        SUM += t;
        ROT += (i + 1) * t;
    }
    
    long long int MAX = ROT;
    
    for(size_t i = 1; i < N; i++) {
        ROT += SUM;
        ROT -= N * T[N - i];
        if(ROT > MAX)
            MAX = ROT;
    }
    
    printf("%lld", MAX);
    
    
    
    return 0;
}
