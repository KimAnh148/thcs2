#include <stdio.h>
int gt(int n)
{
	int gthua=1;
	for(int i=2;i<=n;i++)
	{
		gthua*=i;
	}return gthua;
} 
int Str(int n)
{
	int tong=0;
	for(int a=n;a>0;a/=10)
	{
		int sc=a%10;
		tong+=gt(sc);
	}
	if(n==tong) return 1;
	return 0;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<b)for(int i=a;i<=b;i++)if(Str(i))printf("%d ",i);
	else for(int i=b;i<=a;i++) if(Str(i))printf ("%d ",i);
	
}
