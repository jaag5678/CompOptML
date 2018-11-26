#include<stdio.h>
#include<math.h>

int main () {
    int q;
    long int a, b, c, d;
    
    q = 10;
    
    while(q--) {
        scanf("%ld%ld%ld%ld", &a, &b, &c, &d);
        long long int Sol = 0; //(a,b) are themselves obvious solutions
        long double y1, y2, D;
        for(long long int i = 1; i <= c; i++) {
            D = b * b - 4 * (i * i -  i * a);
            if(D < 0)
                continue;
            y1 = (b + sqrt(D)) / 2.0;
            y2 = (b - sqrt(D)) / 2.0;
            
            if((long long int)y1 - y1 == 0) {
                if(y1 > 0 && y1 <= d)
                    Sol++;
            }
            if(y1 != y2) {
                if((long long int)y2 - y2 == 0) {
                    if(y2 > 0 && y2 <= d)
                        Sol++;
                }
            }
        }
         printf("%lld\n", Sol);        
    }
}