#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n;
    long long int c,ans;
    t = 549;
    while(t--)
    {
        ans=1;
        scanf("%d",&n);
        while(n>1)
        {
            scanf("%lld",&c);
            ans*=c;
            ans%=1234567;
            n--;
        }
        printf("%lld\n",ans);
    }
    return 0;
}