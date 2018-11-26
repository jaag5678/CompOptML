#include<stdio.h>
int ar[100000];
int sum[100000];
int main()
{
    int n,i,max=0,j,tocheck,f;
    n = 99992;
    scanf("%d",&ar[0]);
    sum[0]=ar[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum[i]=sum[i-1]+ar[i];
        if(ar[i]>max)
            max=ar[i];
    }
   /* for(i=0;i<n;i++)
        printf("%d\n",sum[i]);*/
    i=0;

    while(sum[i]<max)
        i++;
    //printf("%d %d\n",i,sum[n-1]);
    for(;i<n;i++)
    {
        int count=0,mult=1;

        if(sum[n-1]%sum[i]==0)
        {

            for(j=i;j<n;j++)
            {
                if(sum[j]==mult*sum[i])
                    mult++;
            }
            //printf("%d %d %d\n",mult,sum[i],sum[n-1]/sum[i]);
            if(mult-1==sum[n-1]/sum[i])
                printf("%d ",sum[i]);
        }
    }
    return 0;
}