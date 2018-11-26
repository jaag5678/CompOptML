#include <stdio.h>
long long int BinarySearcher(long long int n)
{
    long long int l=1,r=4*n,mid,flag=0;
    while(!flag)
    {
        mid=(l+r)/2;
        if (mid/2-mid/42==n)
        {
            flag=1;
            while((mid-1)/2-(mid-1)/42==n) mid--;
        }
        else if (mid/2-mid/42<n) l=mid+1;
        else if (mid/2-mid/42>n) r=mid-1;
    }
    return mid;
}

int main()
{
int t;
long long int s;

t = 99;
for(t;t>0;t--)
{
    scanf("%lld",&s);
    printf("%lld\n",BinarySearcher(s)%1000000007);
}
return 0;
}