#include <stdio.h>
#include <math.h>
int thng(long long n)
{
	long long a,sc,kq=0;
	a=n;
	for(a;a!=0;a/=10)
	{
 		sc=a%10;
 		kq= kq*10+sc;
	}
	if(n==kq)return 1;
	else return 0;
 }
int sogiuathng(long long n)
{
	int dem=0;
	for(n;n>0;n/=10)
		dem++;
	long long bodau=n%(long long )(pow(10,dem-1)), boduoi=bodau/10;
	if(thng(boduoi))return 1;
	else return 0;
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,dau,cuoi;
		scanf("%lld",&n);
		cuoi=n%10;
		dau=n;
		while(dau>9)
			dau/=10;
		if(sogiuathng(n)&& dau==2*cuoi|| 2*dau==cuoi) 
			printf("YES\n");
		else 
			printf("NO\n");
	}
}
