#include<stdio.h>
#include<math.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int T;
    unsigned long long int N, K;
    long  double x, y1, y2;
    
    T = 100000;
    
    while(T--) {
        scanf("%llu%llu", &N, &K);
        
        if(N * N <= 4 * K * N) {
            //printf("%lld\n", N - 1);
            continue;
        }
 
        x = sqrt(N * N - 4 * N * K);
        y1 = floor((N - x) / 2.0);
        y2 = ceil((N + x) / 2.0);
        
        printf("%llu\n", (unsigned long long int )(y1 - y2) + N);
    }
    return 0;
}
