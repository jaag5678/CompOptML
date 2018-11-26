#include<stdio.h>


int main() {
    
    long int a, b, h;
    double x;
    
    scanf("%ld%ld", &a, &b);
    
    x = (2.0 * a) / (double)b;
    
    if((x - (long int)x) > 0) 
        printf("%ld",(long int)x + 1);
    else
        printf("%ld",(long int)x);
    return 0;
}
