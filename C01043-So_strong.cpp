#include <stdio.h>

int gt(int n)
{
	int gthua=1;
	for(int i=2;i<=n;i++) gthua*=i;
	return gthua;
}
int main()
{
	int n;
	scanf("%d",&n);
	int tonggt=0;
	int a=n;
	while(a>0)
	{	int b=a%10;
		tonggt+=gt(b);
		a/=10;
	}
	if (tonggt==n)printf("1");
	else printf("0");
	return 0;
	
}
