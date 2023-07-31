#include <stdio.h>
#include <math.h>
int thng(int n)
{
	int kt=0,m=n;
	for(m;m>0;m/=10)
	{
		kt=kt*10+m%10;
	}
	if(kt==n)return 1;
	else return 0;
}
int sum10(int n)
{
	int tong=0;
	for(n;n>0;n/=10);
	{
		tong+=n%10;
	}
	if(tong%10==0)return 1;
	else return 0;
	
}
int khac4(int n)
{
	for(n;n>0;n/=10)
	if(n%10==4)return 0;
	return 1;
}
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=pow(10,n-1);i<pow(10,n);i++)
		if(thng(i)&&sum10(i)&&khac4(i))printf("%d ",i);
	}printf("\n");
}


