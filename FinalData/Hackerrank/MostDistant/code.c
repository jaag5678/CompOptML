#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int n,i,j,max1,max2,min1,min2;
    double d;
    
    n = 1000000;
    int a[n],b[n];
    double q[6];
    for(i=0;i<n;i++)
        {scanf("%d %d",&a[i],&b[i]);}
    max1=a[0];
    max2=b[0];
    min1=a[0];
    min2=b[0];
    for(i=0;i<n;i++)
    {if(a[i]>max1)
    {max1=a[i];}
    if(a[i]<min1)
    {min1=a[i];}
     if(b[i]>max2)
     {max2=b[i];}
    if(b[i]<min2)
    {min2=b[i];}
    }
    q[0]=sqrt(max1*max1+max2*max2);
    //printf("%.6lf\n",q[0]);
    q[1]=sqrt(max1*max1+min2*min2);
    q[2]=sqrt(min1*min1+max2*max2);
    q[3]=sqrt(min1*min1+min2*min2);
    q[4]=max1-min1;
    q[5]=max2-min2;
    d=q[0];
    for(i=0;i<6;i++)
        {if(q[i]>d)
        {d=q[i];}
        }
    printf("%.6lf",d);
    return 0;
}