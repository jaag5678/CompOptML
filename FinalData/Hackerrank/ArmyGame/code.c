#include<stdio.h>

int main () {
    int n, m;
    int total = 0;
    
    scanf("%d%d", &n, &m);
    
    total += ((n / 2) * (m / 2));
    
    if((n % 2))
        total += (m / 2);
    if((m % 2))
        total += (n / 2);
    
    if((n % 2) && (m % 2))
        total ++;
    
    printf("%d", total);

    return 0;
    
}