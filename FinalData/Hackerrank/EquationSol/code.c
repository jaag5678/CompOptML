#include<stdio.h>
#include<math.h>

long long is_prime(unsigned long long int p);
long long int jcnt = 0;
long long int Primes[100000];
int main() {
  
    //Sieve OF Eratosthenes Function
    int a[1000000] = {1};
	long long int i, j;
	
	a[0] = 0;
	a[1] = 0;
	for(i = 2; i < 1000000; i++) {
			a[i] = 1;
	}
	
	for(i = 2; i < 1000000; i++) {
		if(a[i] == 1) {
			for(j = 2; (i * j) < 1000000; j++) 
				a[i * j] = 0;
		}
	}
       
   
    int Fact[100000];
    unsigned long long int T, N, Den, v, Tmp;
   
    for(size_t i = 0; i < 1000000; i++) { 
        if(a[i]) {
            Primes[jcnt] = i;
            Fact[jcnt++] = 0;
        }
    }
    
        scanf("%llu", &T);
        
        Tmp = 2;
        v = 0;
        Den = 1;
        
       for(size_t i = 0 ; i < jcnt; i++) {
           long long int prime = Primes[i];
           Tmp = T;
           while(Tmp / prime) {
               Fact[i] += (long long int )(Tmp / prime);
               prime *= Primes[i];
           }
       }
    
        for(size_t i = 0; i < jcnt; i++) { 
            Den *= ((Fact[i] * 2) + 1);
            Den  %= 1000007;
        }    
        
        printf("%llu\n", Den);
    return 0;
}

long long is_prime(unsigned long long int p) {
    for(size_t i = 0; i < jcnt; i++) {
        if(p == Primes[i])
            return i;
    }
    return -1;
}
        