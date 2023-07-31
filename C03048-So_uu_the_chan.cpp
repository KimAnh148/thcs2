#include <stdio.h>
int kt(long long n)
{
	int chan=0,le=0;
	for(n;n>0;n/=10)
	{
		if((n%10)%2==0)chan++;
		else le++;
	}
	if(chan>le)return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if((n%10)%2==0 && kt(n))printf("YES\n");
		else printf("NO\n");
	}
}
