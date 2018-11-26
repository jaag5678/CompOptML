#include<stdio.h>
#include<math.h>

#define R 0.30102999566398119521373889472449L

long long int powe(long long int N, long long int K) {
    long long int P = 1;
    long long int X = 2;
   // long long int Z = 2;
    
    while(!(N & 1)) {
        X = (X * X) % K;
        N >>= 1;
    }
    P = X % K;
    N >>= 1;
    
    while(N) {
        X = (X * X) % K;
        if(N & 1) {
            P = (P * X) % K;
        }
        N >>= 1;
    }
    //cout << P;
    return P;
}
int main() {
    //cout << powe(10, 2) << endl;
    int T;
    
    T = 1000;
   // cout << R;
    while(T--) {
        long long int N;
        int K;
        scanf("%lld%d", &N, &K);
        
        long double C, D;
        C = powe(N - 1, pow(10, K));
        D = (N - 1) * R;
        
        //Get the fractional part
        D = D - (long long int)D;
        D = pow(10, D);
        D *= pow(10, K - 1);
        D = (long long int)D;
        
        printf("%Lf\n",  D + C );
        
        
    }
}