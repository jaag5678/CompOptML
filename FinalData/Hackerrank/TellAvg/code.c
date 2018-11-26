//For The average Problem

#include<stdio.h>

int main() {
	long long int T, k;
	unsigned long long int Sol = 0; 
	T = 10000;
	
	while(T--) {
		scanf("%lld", &k);
		Sol = (Sol * (k + 1) + k) % 1000000007;
	}
	printf("%llu", Sol);
}		
