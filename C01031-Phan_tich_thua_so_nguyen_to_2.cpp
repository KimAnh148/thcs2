#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a=n;
	for(int i=2; i<=n; i++)
	{
		while(a%i==0)
		{
			printf("%d", i);
			if(a/i!=1 ) 
				printf("x");
			a/=i;
		}
	}
} 
