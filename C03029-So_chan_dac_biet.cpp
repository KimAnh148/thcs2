#include <stdio.h>
int check(long long n)
{
	long long a=n;
	for(n;n>0;n/=10)
	{
		int a=n%10;
		if(a%2!=0)return 0;	
	} return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}
