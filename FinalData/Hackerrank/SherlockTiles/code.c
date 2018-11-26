#include<stdio.h>
#include<math.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double L, S1, S2, Q, q;
    double A;
    L = 10000000;
    S1 =  1;
    S2 = 99999997;
    Q = 100000;
    
    while(Q--) {
        scanf("%lf", &q);
        if(q == L * L) {
            printf("0.000000000000000000000000000000000000\n");
            continue;
        }
        //cout.precision(20);
        A = (long double)(((sqrt(2)) * (L - sqrt(q)))/ (long double)(abs(S2 - S1))) ;
        //cout << fixed << A << endl;
    }
    return 0;
}
