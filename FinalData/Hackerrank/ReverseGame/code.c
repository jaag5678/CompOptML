#include<stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int N, T, K;
    
    T = 50;
    
    while(T--) {
        scanf("%ld%ld", &N, &K);
        if((N - 1 - K) <= K)
            printf("%ld\n", (N - 1 - K) * 2);
        else
            printf("%ld\n", 2 * K + 1);
    }
    return 0;
}
