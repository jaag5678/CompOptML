#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,t,val,i;
    unsigned long long int res=0;
    t = 10;
    while(t--)
    {
        unsigned long long int a[1000001]={0};
        res=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
         {
          scanf("%d",&val);
            a[val]++;
         }
        for(i=1;i<=1000000;i++)
        {
            if(a[i]!=0)
            {
             res=res+(a[i]*(a[i]-1));   
            }
        }
        printf("%llu\n",res);
        
    }
    return 0;
}