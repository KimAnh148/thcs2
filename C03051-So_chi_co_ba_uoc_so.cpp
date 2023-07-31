#include <stdio.h>
#include <math.h>
int snt(long long n)
{
	if (n<2)return 0;
	else
	{
		for(long long i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long l,r;
		int dem=0;
		scanf("%lld %lld",&l,&r);
		for(long long i=l;i*i<=r;i++)
		{
			if(snt(i)) dem++;
		}printf("%d\n",dem);
		
	}
}


