#include<stdio.h>
#include<math.h>

long long int small(long long int x) {
    for(size_t i = 2; i <= sqrt(x); i++) {
        if(!(x % i))
            return i;
    }
    return 1;
}

long long int max_moves(long long int a) {

    if(a == 1)
        return 1;
    long long int sum = a;
    long long int i2;
    while(1) {
        i2 = small(a);
       // cout << i2 << " " << a / i2 << "\n";
       
        if(i2 == 1) 
            break;
        sum = sum + a / i2;
        a = a / i2;    
    }
    return sum + 1;
}


int main () {
    int n;
    long long int a;
    long long int F = 0;
    
    n = 100;
    
    while(n--) {
        scanf("%lld", &a);
        F += max_moves(a);
    }
    printf("%lld", F);
}