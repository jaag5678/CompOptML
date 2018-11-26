#include<stdio.h>
#include<math.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long int N;
    long int T;
    T = 1000;
    while(T--) {
        scanf("%llu", &N);
        if(N == 1) {
            printf("0\n");
            continue;
        }
        int a1, a2;
        int lg;
        lg = log2 (N);
       // cout << lg << endl;
        switch((lg-1) % 5) {
            case 0: a1 = 6;
            break;
            case 1: a1 = 2;
            break;
            case 2: a1 = 8;
            break;
            case 3: a1 = 4;
            break;
            case 4: a1 = 0;
        } 
        if((N+1) % 2)
            a2 = 1;
        else
            a2 = 5;
       // cout << a1  << a2 << endl;
        printf("%d\n", (a1 * a2) % 10);
    }
    return 0;
}
