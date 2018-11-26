#include<stdio.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int T;
    long long int N, K;
    
    T = 5;
    
    
    while(T--) {
        scanf("%lld%lld", &N, &K);
        
        long long int T, C = 0;
        long long int Sum = 0;
        for(long int i = 0; i < N; i++) {
            scanf("%lld", &T);
            if(T > K) {  
                C = i + 1;
                Sum += (i + 1);
            }
            else {
                if(Sum)
                    Sum += C;
            }
        }
        printf("%lld\n", Sum);
    }
    return 0;
}
