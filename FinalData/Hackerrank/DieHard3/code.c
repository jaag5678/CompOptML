#include<stdio.h>

long long int gcd(long long int a, long long int b) {
    if(!b)
        return a;
    return gcd(b, a % b);
}

    

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    int a, b, c;
    
    T = 100;
    
    while(T--) {
        scanf("%d%d%d", &a, &b, &c);
        
        //cout << gcd(a,b) << "\t" << gcd(b,c) << "\t" << gcd(a,c) << "\n";
        if(c > a && c > b)
           printf("NO\n");
        else if(!(c % gcd(a,b)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
/*
5
131 264 30
972 79 506
504 858 147
797 612 939
799 678 227
*/
