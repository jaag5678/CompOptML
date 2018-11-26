#include<stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int T, K;
    
    T = 10;
    
    while(T--) {
        scanf("%lld", &K);
        printf("%lld\n", (long long int)(K/2) * (K - (long long int)(K/2)));
    }
    return 0;
}
