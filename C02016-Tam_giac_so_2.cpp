#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		int m=i;
		if(m%2 != 0)
		{
			int tmp=1;
			for(int j=1; j<=i; j++)
			{
				printf("%d", tmp);
				tmp+=2;
			}
		}
		else
		{
			int tmp=2;
			for(int j=1; j<=i; j++)
			{
				printf("%d", tmp);
				tmp+=2;
			}
		}
		printf("\n");
	}
}
