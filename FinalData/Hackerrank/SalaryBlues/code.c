#include <stdio.h>

long long min,a[200000],i,j,k,l,m,n,q;

long long gcd(long long xx, long long yy)
{
 long long zz;
 
 while(yy)
 {
  zz = yy;
  yy = xx%yy;
  xx = zz;
 }
 
 return xx;
}


int main()
{

n = 100000;
q = 100000;

for(i=0;i<n;i++) 
   scanf("%lld",a+i);

min = a[0];

for(i=0;i<n;i++) 
  if(a[i] < min) min = a[i]; 

for(i=0;i<n;i++) a[i] -= min;

m = a[0];

for(i=1;i<n;i++) m = gcd(m, a[i]);

for(i=0;i<q;i++)
{
scanf("%lld",&k);

printf("%lld\n",gcd(m,min+k));
}


return 0;
}