#include<stdio.h>
#include<math.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, cnt; // FOr no of Test cases
    long long int k, y;
    long double x, z, d;
    T = 1000;
    
    while(T--) {
        scanf("%Lf%lld", &d, &k);
        x = sqrt(d);
        if(x - (long long int)x == 0)
            k -= 4;
        if(k < 0) {
            printf("impossible\n");
            continue;
        }
        if(d == 1) {
            printf("possible\n");
            continue;
        }
        y = 1;
        cnt = 0;
        while(y < (x / sqrt(2))) {
            z = d - (y * y);
            z = sqrt(z);
            if(z - (long long int)z == 0)
                cnt ++;
            y ++;
        }
        if(sqrt(d / 2) - (long long int)sqrt(d / 2) == 0)
             k -= 4;
        k -= (cnt * 8);
        //cout << k << endl;
        if(k >= 0) 
            printf("possible\n");
        else
            printf("impossible\n");
    }
    return 0;
}
