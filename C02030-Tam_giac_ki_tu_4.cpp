#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		int cnt=1;
		for(int j=1; j<=2*i-1; j++)
		{
			if(i>j)
			{
				printf("%c", cnt+63);
				cnt+=2;
			}
			else
			{
				printf("%c", cnt+63);
				cnt-=2;
			}
		}
		printf("\n");
	}
}
