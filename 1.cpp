#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int m=2*n-1, a[m][m];
	int h1=0, h2=m-1, c1=0, c2=m-1, tmp=n;
	while(h1<=h2 && c1<=c2)
	{
		for(int i=c1; i<=c2; i++)
			a[h1][i] = tmp;
		h1++;
		for(int i=h1; i<=h2; i++)
			a[i][c2] = tmp;
		c2--;
		if(c1<=c2)
		{
			for(int i=c2; i>=c1; i--)
				a[h2][i] =tmp;
			h2--; 
		}
		if(h1<=h2)
		{
			for(int i=h2; i>=h1; i--)
				a[i][c1] = tmp;
			c1++;
		}
		tmp--;
	}
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<m; j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
}
