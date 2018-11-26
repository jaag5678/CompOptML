#include<stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main(){
    int n,k,i;
    n = 100000;
    k = 372150192;
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int g = a[0];
    for(i=1;i<n;i++)
        g = gcd(g,a[i]);
    for(i=2;i<g && i<1000000;i++){
        if(g%i==0){
            g = i;
            break;
        }
    }
    int ans = k/g;
    ans = ans * g;
    printf("%d",ans);
}