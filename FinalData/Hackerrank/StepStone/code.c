#include<stdio.h>
#include<math.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long T, N;
    T = 100000;
    while(T--) {
        scanf("%llu", &N);
        double c = sqrt(1 + (8 * N));
        if(c - (unsigned long long)(c) == 0) {
            if(!(((unsigned long long )(c) -1) % 2)) {
               printf("Go On Bob %llu\n", ((unsigned long long )(c) -1) / 2 );
                continue;
            }
        }
        printf("Better Luck Next Time\n");
    }
    return 0;
}
