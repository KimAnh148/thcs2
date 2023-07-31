#include <stdio.h>
int gt(int n)
{
	int gthua=1;
	for(int i=1;i<=n;i++) gthua*=i;
	return gthua;
}
int str(int n)
{
	int tong=0, a=n;
	for(a;a>0;a/=10)
	{
		int sc=a%10;
		tong+= gt(sc);
	}
	if(tong==n) return 1;
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<n; i++)
	{
		if(str(i))printf("%d ",i);
	}
}
