#include <stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int N;
    int T;
    T = 100;
    while(T--) {
        scanf("%lld", &N);
        if(N == 1 || N == 2) {
            printf("-1\n");
            continue;
        }
        if(N % 2) {
            printf("2\n");
            continue;
        }
        if(!(N % 4)) {
            printf("3\n");
            continue;
        }
       	printf("4\n");
    }
    return 0;
}
