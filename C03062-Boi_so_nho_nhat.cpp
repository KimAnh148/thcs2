#include<stdio.h>
long long gcd(long long a, long long b)
{
	if(b==0)
		return a;
	return gcd(b, a%b);
}
long long lcm(long long a, long long b)
{
	return a*b/gcd(a,b);
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n, m, ans=1;
		scanf("%lld %lld", &n, &m);
		for(long long i=n;i<=m; i++)
			ans=lcm(ans, i);
		printf("%lld\n", ans);
	}
}
