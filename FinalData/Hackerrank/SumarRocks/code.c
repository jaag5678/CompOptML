#include<stdio.h>
#include<math.h>

long int gcd (long int a, long int b) {
    //cout << a << " " << b << endl;
    if(!a)
        return b;
    if(!b)
        return a;
    if(a > b)
        return gcd(a % b, b);
    return gcd(a, b % a);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int T, x1, x2, y1, y2;
    double A, B, C;
    long long int Of, Loop, Cnt;
    double R;
    
    T = 70000;
    
    while(T--) {
        scanf("%lld%lld%lld%lld", &x1, &y1, &x2, &y2);
        
        
        A = abs(x1 - x2);
        B = abs(y1 - y2);
        if(A == 0) {
            printf("%f\n", B - 1 );
            continue;
        }    
        else if(B == 0) {
            printf("%f\n", A - 1);
            continue;
        }    
        C = gcd(A, B);
        if(C) {
            A /= C;
            B /= C;
        }    
        
       // cout << C << endl;
        
        if(B > A) {
            printf("%lld\n", (long long int)(abs(x1 - x2) / (double)A) - 1 );
        }
        else
            printf("%lld\n", (long long int)(abs(y1 - y2) / (double)B) - 1);
            
    }
    
    return 0;
}
