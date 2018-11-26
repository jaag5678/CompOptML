#include<stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int q, a, b, d;
    
    q = 100000;
    
    while(q--) {
        scanf("%ld%ld%ld", &a, &b, &d); 
        long int t1, t2;
        long int s = 0;
        
        while(2 * b <= d) {
            d -= b;
            s++;
        }
        
        
        if(d % a && d % b)
            s += 2;
        else if (d != 0) 
            s ++;
        
        printf("%ld\n", s);
    }
    
    return 0;
}
