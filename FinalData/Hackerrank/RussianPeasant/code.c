#include<stdio.h>


void complex_matrix_powers(long long int R, long long int I, long long int power, long long int M) {
    long long int Real, Imag, R1, I1, Real1, Imag1;
    Real = 1;
    Imag = 1;
   while(!(power & 1)) {
       R1 = ((R * R) % M - (I * I) % M) % M;
       I1 = (2 * R * I) % M;
       power >>= 1;
       R = R1;
       I = I1;
       //cout << R << " " << I << "\n";
   }  
    
    Real = R;
    Imag = I;
    power >>= 1;
    while(power > 0) {
        R1 = ((R * R) % M - (I * I) % M) % M;
        I1 = (2 * R * I) % M;
        if(power & 1) {
            Real1 = ((Real * R1) % M - (Imag * I1) % M) % M; 
            Imag1 = ((Real * I1) % M + (Imag * R1) % M) % M;
            Real = Real1;
            Imag = Imag1;
            //cout << "HI" << endl;
        }
        R = R1;
        I = I1;
       // cout << R << " " << I << "\n";
        power >>= 1;
    }
    //printf("%lld %lld", (Real + M) % M , (Imag + M) % M);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int Q, R, I, K, M;
    
    Q = 20000;
    while(Q--) {
        scanf("%lld%lld%lld%lld", &R, &I, &K, &M);
        complex_matrix_powers(R, I, K, M);
       // printf("\n");
    }
    return 0;
}
