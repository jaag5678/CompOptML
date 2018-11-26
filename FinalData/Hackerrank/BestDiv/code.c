#include<stdio.h>
#include<math.h>

int sum_digit(long int x) {
    int sum = 0;
    while(x) {
        sum += (x % 10);
        x = x / 10;
    }
    return sum;
}


int main()
{
    int n;
    int best = 1;
    int best_sum = 1;
    int sum = 0;
    scanf("%d", &n);
    
    
    double x = sqrt(n);
    
    for(int i = 1; i <= x; i++) {
        if(!(n % i)) {
            sum = sum_digit(i);
            if(sum > best_sum) {
                best_sum = sum;
                best = i;
            }
            else if(sum == best_sum) {
                if(i < best)
                    best = i;
            }
            sum = sum_digit(n / i);
            if(sum > best_sum) {
                best_sum = sum;
                best = n / i;
            }
            else if(sum == best_sum) {
                if((n / i) < best)
                    best = n / i;
            }
        }
        
    }
    printf("%d", best);
    return 0;
}
