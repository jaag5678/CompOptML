#include<stdio.h>

long long int M = 1000000007;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    long int N;
    
    T = 10;
    while(T--) {
        scanf("%ld", &N);
        
        int D[N + 1];
        for(int i = 0 ; i < N + 1; i++)
            D[i] = 0;
        long int c;
        for(long int i = 0; i < N; i++) {
            scanf("%ld", &c);
            D[c]++;
        }
        
        long long int Zum = 0;
        for(long int i = 0; i <= N; i++) {
            Zum += D[i];
            //cout << D[i] << "\n";
        }
        //cout << "HI\n" << Zum << "\n";
        long long int A = 1;
        long long int Z = D[0];
        long long int x = 1;
        
        while(1) {
            A = (A * Z) % M;
            if(x < N)
               Z = Z + D[x++];
            Z--;
           // cout << A << "\n";
            if(x == Zum)
                break;
            //cout << "ho\n";
        }
        printf("%lld\n", A);    
    }
    return 0;
}
