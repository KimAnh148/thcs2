#include <stdio.h>
long long fb[100];
void dfb()
{
	fb[0]=0;
	fb[1]=1;
	for(int i=2; i<=92; i++)
		fb[i]= fb[i-1]+fb[i-2];
}
int main()
{
	int n;
	scanf("%d", &n);
	long long a[n][n];
	int  cnt=0;
	dfb();
	int h1=0, h2=n-1, c1=0, c2=n-1;
	while(h1<=h2 && c1<=c2)
	{
		for(int i=c1; i<=c2; i++)
		{
			a[h1][i] = fb[cnt];
			cnt++;
		}
		h1++;
		for(int i=h1; i<=h2; i++)
		{
			a[i][c2] = fb[cnt];
			cnt++;
		}
		c2--;
		if(c1<=c2)
		{
			for(int i=c2; i>=c1; i--)
			{
				a[h2][i] = fb[cnt];
				cnt++;
			}
			h2--;
		}
		if(h1<=h2)
		{
			for(int i=h2; i>=h1; i--)
			{
				a[i][c1] = fb[cnt];
				cnt++;
			}
			c1++;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
