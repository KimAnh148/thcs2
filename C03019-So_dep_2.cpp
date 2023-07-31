#include<stdio.h>
#include<math.h>
int sodep2(long long n)
{
	int x=n, tmp=0, sum=0;
	while(n)
	{
		tmp = tmp * 10 + n%10;
		sum += n%10;
		n /= 10;
	}
	if(tmp==x && sum%10==0)
		return 1;
	else
		return 0;
}
long long mu(int n)
{
	long long fac = 1;
	for(int i=0; i<n; i++)
	{
		fac *= 10;
	}
	return fac;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int m;
		scanf("%d", &m);
		int cnt=0;
		for(long long i=mu(m-1); i< mu(m); i++)
			if(sodep2(i))
				cnt++;
		printf("%d\n", cnt);
	}
}
