#include <stdio.h>
void dayfb(int n)
{
	long long fb[n];
	fb[0]=0;
	fb[1]=1;
	for(int i=2;i<n;i++) fb[i]=fb[i-1]+fb[i-2];
	for(int i=0;i<n;i++) printf("%lld ",fb[i]);
}
int main()
{
	int n;
	scanf("%d",&n);
	dayfb(n);
}
