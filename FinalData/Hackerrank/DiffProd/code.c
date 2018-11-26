#include<stdio.h>
#include<math.h>

int main () {
    
    int T;
    long long int D, P;
    long double X, Y;
    
    T = 20000;
    
    while(T--) {
        scanf("%lld%lld", &D, &P);
        
        if(D < 0) {
           // printf("0\n");
            continue;
        }
        
        int sol = 0;
        long double G = 0.0;
        X = (D * D) + 4 * P;
        
        if(X > 0) {
            if(((long long int)sqrt(X) - sqrt(X)) < 0)
                sol = 0;
            else if(D == 0)
                sol = 2;
            else 
                sol = 4;
        }
        else if(X == 0) {
            if(D == 0)
                sol = 1;
            else 
                sol = 2;
        }
            
        
        printf("%d\n", sol);
    }
    
}