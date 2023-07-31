#include <stdio.h>
int snt(int n)
{
	if(n<2) return 0;
	for(int i=2; i*i<=n; i++)
		if(n%i == 0)
			return 0;
	return 1;
} 
int mnt[400];
void xd()
{
	int i=0, cnt =0;
	while(cnt<400)
	{
		if (snt(i))
		{
			mnt[cnt] = i;
			cnt++;
		}
		i++;
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	for(int tc=1; tc<=t; tc++)
	{
		int n;
		scanf("%d", &n);
		int a[n][n], cnt = 0;
		xd();
		printf("Test %d:\n", tc);
		int h1=0, h2=n-1, c1=0, c2=n-1;
		while(h1<=h2 && c1<=c2)
		{
			for(int i=c1; i<=c2; i++)
			{
				a[h1][i] = mnt[cnt];
				cnt++;
			}
			h1++;
			for(int i=h1; i<=h2; i++)
			{
				a[i][c2] = mnt[cnt];
				cnt++;
			}
			c2--;
			if(c1<=c2)
			{
				for(int i=c2; i>=c1; i--)
				{
					a[h2][i] = mnt[cnt];
					cnt++; 
				}
				h2--;
			}
			if(h1<=h2)
			{
				for(int i=h2; i>=h1; i--)
				{
					a[i][c1] = mnt[cnt];
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
}
