#include<stdio.h>

long long int calc(long long int X ) {
    // First we define 4 % X
    long long int F, Z;
    long long int Tw, Fi;
    int fact = 0;
    int dig = 4;
    F = 0;
    Z = 0;
    Tw = 0;
    Fi = 0;
    
    //First remove the powers of 2 and 5
    if(!(X % 4)) {
        X /= 4;
        dig = 1;
    }
    else if(!(X % 2)) {
        X /= 2;
        dig = 2;
    }
    
    while(!(X % 2)) { 
        X /= 2;
        Tw++;
    }
    while(!(X % 5)) {
        X /= 5;
        Fi++;
    }
    //if(Tw >= 2) {
      //  Tw -= 2;
    Z = Fi > Tw ? Fi : Tw ;// No of zero's fixed now 
    
    //Now to count no of ones or could say 4's but since it must be now a factor of the other no we ignore that and consider divisible by 1111111....
    
    
    do {
        fact = (fact * 10 + dig) % X;
        F++;
    }while(fact);
    
    return 2 * F + Z;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long  int T, X;
    
    T = 100;
    while(T--) {
        scanf("%lld", &X);
        printf("%lld\n", calc(X));
    }
    return 0;
}
