#include<stdio.h>


long long int gcd(long long int a, long long int  b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    long long int n;
    n = 100000;
    long long int G;
    long long int a[n];
    for(long long int a_i = 0; a_i < n; a_i++){
       scanf("%lld", &a[a_i]);
    }
    
    long long int Co;
    for(long long int i = 0; i < n; i++) {
        //Choose one element
        if(n == 1) {
            printf("%lld\n", a[0] + 1);
            break;
        } 
        if(n == 2) {
            if(a[1] == 1)
                printf("%lld\n", a[0]);
            else
                printf("%lld\n", a[1]);
            break;
        }
        Co = a[i];
        G = 0;
        //a.erase(a.begin() + i);
        //a.push_back(Co);
        G = gcd(a[(i + 1) % n], a[(i + 2) % n]);
        for(long long int j = 0; j < n; j++) {
            if((i != j))
              G = gcd(G, a[j]);
            if(!(Co % G)) {
                break;
            }
        }
        if((Co % G )) {
            printf("%lld\n", G);
            break;
        }
       
    } 
    // your code goes here
    return 0;
}
