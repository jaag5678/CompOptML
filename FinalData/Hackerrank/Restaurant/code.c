// To find the LCM of 2 given nos

#include<stdio.h>

int main() {
	
	int T, l, b;
	
	T = 96;
	while(T) {
		
		int a, c, d;
		scanf("%d%d", &l, &b);
        if(l < b) {
			a = l;
            c = b;
        }    
		else {
			a = b;
            c = l;
        }    
		
		int t = 1;
		while(t <= (a)) {
			if(!(a % t)) 
				if(!(c % t))
					d = t;
			t++;
		}
		
		l = l / d;
		b = b / d;
		
		printf("%d\n",l * b);
		T--;					
	}
	return 0;
}	
