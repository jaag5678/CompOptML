#include<stdio.h>

long long int Z = 1000000007;
int N, M;

typedef struct C {
    long int x;
    long int y;
}G;
G exteuc(long long int a, long long int b) {
    G c;
    if(!b) {
        c.x = 1;
        c.y = 0;
        return c;
    }
    G d = exteuc(b, a % b);
    c.x = d.y;
    c.y = d.x - (a / b) * (d. y);
    return c;
}
long long int func() {
    long long int ans = 1;
    for(int i = 0; i < N; i++) {
        ans = (ans * (N + M - i) )% Z;
        G f = exteuc(i + 1, Z);
        if(f.x < 0)
            f.x += Z;
        ans = (ans * f.x) % Z;
        //cout << f.x << "\n";
        //if(ans < 0)
          //  ans *= -1;
        ans %= Z;
         
    }
    //ans %= Z;
    return ans;
} 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T; 
    
    T = 5;
    
    while(T--) {
        scanf("%d%d", &N, &M);
        printf("%lld\n", func());
        
    }
    
    //G F = exteuc(3, 7);
    //cout << F.x << "\n" << F.y << "\n";
    return 0;
}
