#include<stdio.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int N, K;
    long int A, B;
    unsigned long long int D;
    
    N = 90000;
    A = 0;
    B = 0;
    
    while(N--) {
        scanf("%ld", &K);
        if(K % 2)
            A++;
        else
            B++;
    }
    D = 1;
    if(A)
        K = B + A - 1;
    else
        K = B;
    //We need to return 2 ^(B + A / 2) % 1000000007
    while(K--) 
        D = (D * 2) % 1000000007;
    printf("%llu", D - 1);
    return 0;
}
