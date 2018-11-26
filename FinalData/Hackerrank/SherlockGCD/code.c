#include<stdio.h>
int gcd(int a,int b)
    {
        if(b==0)
            return(a);
            return(gcd(b,a%b));
    }
int main()
{
    int t,n,i,j,a[110];
    t = 10;
    while(t--)
        {
            int f=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                }
            for(i=0;i<n;i++)
                {
                    for(j=i+1;j<n;j++)
                        {
                            if(a[i]>a[j])
                                {
                                    if(gcd(a[i],a[j])==1)
                                        {
                                            f=1;
                                            goto A;
                                        }
                                }
                            else 
                                {
                                    if(gcd(a[j],a[i])==1)
                                        {
                                            f=1;
                                            goto A;
                                        }
                                 }
                        }
                }
               A: if(f)
                    {
                        printf("YES\n");
                    }
                else
                    {
                        printf("NO\n");
                    }
        }
      return(0);
}