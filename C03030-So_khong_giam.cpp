#include <stdio.h>
#include <math.h>
int kt(int n)
{
	int x,y;
	while(n>0)
	{
		x = n % 10;
		n /= 10;
		y = n % 10;
		if(y > x) 
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n,a,b;
		scanf("%d",&n);
		a = pow(10, n-1);
		b = pow(10,n);
		for(int i=a;i<b;i++)
			if(kt(i)) printf("%d ",i);
		printf("\n");
	}
}
