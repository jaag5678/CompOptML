#include<stdio.h>

int a[1000000];

int SumD (int N) {
    int D = 0;
    while(N) {
        D += (N % 10);
        N /= 10;
    }
    return D;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    //The Sieve Function
    for(int i = 0; i < 1000000; i++)
        a[i] = 1;
    a[0] = 0;
    a[1] = 0;
    
    for(int i = 2; i < 1000000; i++) {
        for(int j = 2; i * j < 1000000; j++)
            a[i * j] = 0;
    }
    
    int p[1000000];
    int j = 0;
    for(int i = 0; i < 1000000; i++) {
        if(a[i])
            p[j++] = i;
    }     
    
    unsigned int N, T, i;
    unsigned int D1, D2;
    
    scanf("%u", &N);
    
    T = N;
    while(T) {
        D1 += (T % 10);
        T = T / 10;
    }
    
    //cout << "HI\n";
    
    T = N;
    i = 0;
    
    while(T != 1) {
        while(!(T % p[i])) {
            D2 += SumD(p[i]);
            T /= p[i];
        }    
        i++;
    }
    
    
    
    if(D1 == D2)
        printf("1");
    else
        printf("0");
    
    return 0;
}
