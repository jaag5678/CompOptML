#include<stdio.h>
#include<math.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int T, a, b, x;
    T = 100000;
    while(T--) {
        
        scanf("%lld%lld%lld", &a, &b, &x);
        
        if(b < 0) {
            if(a == 1) {
                if(x == 1)
                    printf("1\n");
            }
            else
                printf("0\n");
            continue;
        }
        long long int p = pow(a, b);
        long long int F = p / x;
        if(p <= x) {
            if((x - p) < p)
                printf("%lld\n", x);
            else
                printf("0\n");
            continue;
        }
       // if((p - x * F) < p && (p - x * F) < (p - x))
       long long int x1 = x * F;
        long long int x2 = x * (F + 1);
        
        if((p - x1) <= (x2 - p))
            printf("%lld\n", x1);
        else
            printf("%lld\n", x2);
        
         //  cout << x << endl;
        //else
          //  cout << 0 << endl;
        
    }
    return 0;
}
