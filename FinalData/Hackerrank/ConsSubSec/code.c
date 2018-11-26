#include<stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    long int N, K;
    
    T = 20;
    while(T--) {
        scanf("%ld%ld", &N, &K);
        long int V[N];
        
        for(long int i = 0; i < N; i++) 
            scanf("%ld", &V[i]);
        
        long long int ans = 0;
        //cout << "hi\n" << endl;
        char D[N];
        for(int i = 0 ; i < N; i++)
            D[i] = 0;
            
        for(long int i = 0; i < N; i++) {
              if(D[i])
                  continue;
            long int cnt = 0;
            long int sum = 0;
            long int j = i;
            while(j < N) {
                sum += V[j++];
                if(!(sum % K)) {
                    cnt++;
                    D[j] = 1;
                }
            }
            
            //cout << "HI!\n";
            ans = ans + (cnt * (cnt + 1)) / 2 ;
        }
    
        
        printf("%lld\n", ans);
    }
    return 0;
}
