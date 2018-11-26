#include<stdio.h>

int T[4]={1,2,5,10},a[4];
int dfs(int d,int n){
//printf("---%d %d\n",d,n);
	if(d==0){
		return n<=a[0]*T[0];
	}
	int i=0,s=0;
	for(;i<=a[d]&&i*T[d]<=n;i++)s+=dfs(d-1,n-i*T[d]);
	return s;
}
int main(){
	int n,t,i,j,k;
	for(t = 72; t > 0; t --){
		scanf("%d",&n);for(i=0;i<4;i++)scanf("%d",a+i);
		printf("%d\n",dfs(3,n));
	}
}