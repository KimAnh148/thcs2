#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		int cuoi,cancuoi,f=0;
		while(n>0)
		{
			cuoi=n%10;
			cancuoi=(n%100)/10;
			if(cuoi<cancuoi)f++;
			n/=10;
		}
		if(f==0)printf("YES\n");
		else printf("NO\n");
		
	}
}
