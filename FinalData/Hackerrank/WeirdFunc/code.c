#include<stdio.h>
#include<math.h>


int main() {
    
    long long int Tot[1420000];
    
    for(long long int i = 0; i < 1420000; i++)
        Tot[i] = i;
    
    for(long long int i = 2; i < 1420000; i++) {
        if(Tot[i] == i) {
            for(long long int j = 1; i * j < 1420000; j++) {
                Tot[i * j] *= (i - 1);
                Tot[i * j] /= (i);
            }
        }
    }
    
    long long int Z[1420000];
        
    for(long long int i = 0; i < 1420000; i++) {
        if(!(i % 2))
            Z[i] = Tot[i / 2] * Tot[i + 1];
        else
            Z[i] = Tot[i] * Tot[(i + 1) / 2];
    }
    
    long long int  B[1420000];
    
    B[0] = Z[0];
    for(long long int i = 1; i < 1420000; i++) {
        B[i] = B[i - 1] + Z[i];
    }
    
    
    //for(long long int i = 0; i < Tot.size(); i++)
      //  cout << Tot[i] << "\n";
    long long int T, L, R;
    T = 100000;
    
    while(T--) {
        scanf("%lld%lld", &L, &R);
        
        double C1, C2;
        
        C1 = (sqrt(1 + 8 * L) - 1) / 2.0;
        C2 = (sqrt(1 + 8 * R) - 1) / 2.0;
        
        if((long long int)(C1) - C1 == 0)
            C1 = (long long int)C1;
        else
            C1 = (long long int)C1 + 1;
        C2 = (long long int)C2;
        
        long long int Sum = 0;
        //for(long long int i = C1; i <= C2 ; i++) { 
            //Sum += Z[i];
            Sum = Sum + (B[(long long int)C2] - B[(long long int)C1 - 1]);
        
        printf("%lld\n", Sum);
        
    }
    return 0;
}
