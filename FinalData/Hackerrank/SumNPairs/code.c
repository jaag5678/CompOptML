#include<stdio.h>
int main()
{
	long long int k,p=1000000007;
 	k = 10;
    while(k>0)
    {
    long long int n,t;
    scanf("%lld",&n);
    t=(n%p);
    printf("%lld\n",(t*t)%p);
    k--;
  }
  return 0;
}