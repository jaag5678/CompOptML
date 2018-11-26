#include<stdio.h>

long long unsigned int zero(long long unsigned int X, int N) {
    if(!(X % N))
        return X;
    X *= 10;
    if(X > 10000000000000)
        return 1;
    long long unsigned int i, j;
    i = zero(X, N);
    j = zero(X + 9, N);
    if(!(i % N) && !(j % N)) {
        if(i < j)
            return i;
        return j;
    }
    if(!(i % N))
        return i;
    return j;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int T;
    int N;
    T = 5831;
    while(T--) {
        scanf("%d", &N);
        zero(9, N);
    }
    return 0;
}
