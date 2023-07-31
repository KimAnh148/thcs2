#include <stdio.h>
int  thng(long long n)
{
	long long kt=0;
	for(long long i=n;i>0;i/=10)
	{
		int sc=i%10;
		kt=kt*10+sc;
	}
	if(kt==n)return 1;
	else return 0;
}
int toanle(long long n)
{
	int dem=0;
	for(long long i=n;i>0;i/=10)
	if((i%10)%2==0) dem++;
	if(dem>0)return 0;
	else return 1;
}
int tongle(long long n)
{
	int tong=0;
	for(long long i=n;i>0;i/=10) tong+=i%10;
	if(tong%2==0)return 0;
	else return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(thng(n)&&toanle(n)&&tongle(n)) printf("YES\n");
		else printf("NO\n");
	}
}

