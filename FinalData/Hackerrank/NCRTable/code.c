#include<stdio.h>
#include<stdlib.h>

# define MAX 100 // assuming we need first 100 rows
int** triangle;
long long int lim;

void makeTriangle(unsigned long long int a) {
    unsigned long long int i, j;

    // initialize the first row
    //triangle[0][0] = 1; // C(0, 0) = 1

    for(i = lim+1; i <= a; i++) 
    {
        triangle[i]=(int*)malloc(sizeof(int)*(i+1));
        triangle[i][0] = 1; // C(i, 0) = 1
        for(j = 1; j < i; j++) {
            triangle[i][j] = (triangle[i - 1][j - 1] % 1000000000 + triangle[i - 1][j] % 1000000000) % 1000000000;
            //printf("%d  ",triangle[i][j]);
        }
        triangle[i][j]=1;
        //printf("%lld\n",i);
    }
}
int main()
{
    long long int j=0,n=0,r=0,i=0,test=0;
    triangle=(int**)malloc(sizeof(int*)*1002);
    triangle[0]=(int*)malloc(sizeof(int)*1);
    triangle[0][0]=1;
    lim=0;
    test = 157;
    for(i=0;i<test;i++)
    {
        scanf("%lld",&n);
        if(n>lim)
        {
            makeTriangle(n);
        }
        for(j=0;j<=n;j++)
            printf("%d ",triangle[n][j]);
        printf("\n");
    }

}