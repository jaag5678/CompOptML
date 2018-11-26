#include<stdio.h>
#include<math.h>

int main() {
  
    //Sieve Function
    unsigned long long int N, T;
    T = 100;
    while(T--) {
        scanf("%llu", &N);
        if(N % 2) {
            printf("0\n");
            continue;
        }
        //N /= 2;
        unsigned long long int i = 1;
        unsigned long long int cnt = 0;
        
        while(i <= (unsigned long long int)sqrt(N)) {
            if(!(N % i)) {
                if(!(i % 2))
                    cnt++;
                if((N/i) != i)
                    if(!((N / i) % 2))
                        cnt++;
            }    
            i++;
        }
        printf("%llu\n", cnt);
    }
    return 0;
}
        