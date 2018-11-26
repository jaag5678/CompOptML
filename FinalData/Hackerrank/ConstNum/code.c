#include<stdio.h>

long int sum_digits(long int x) {
    long int sum = 0;
    while(x) {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}


int main()
{
   int t, n;
   long long int a;
    
    t = 100;
    
    while(t--) {
        scanf("%d", &n);
        long long int x = 0;
        while(n--) {
            scanf("%lld", &a);
            x += sum_digits(a);
        }
        if(!(x % 3))
            printf("Yes\n");
        else
            printf("No\n");
    }
}


