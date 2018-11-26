#include<stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
  //  vector<long long int> a , b;
    long long int s, t, max_a, max_b;
    max_a = 1000001;
    max_b = 1000001;
    
    N = 100;
    
    while(N--) {
        scanf("%lld%lld", &t, &s);
        if(max_a > t)
            max_a = t;
        //a.push_back(t);
        if(max_b > s)
            max_b = s;
        //b.push_back(s);
    }
    
    
    printf("%lld", max_a * max_b);
    return 0;
}
