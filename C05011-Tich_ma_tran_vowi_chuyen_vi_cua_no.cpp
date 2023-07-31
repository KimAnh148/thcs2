#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	for(int k=1; k<=t; k++)
	{
		int n,m;
		scanf("%d %d", &n, &m);
		int a[n+1][m+1], cv[m+1][n+1], kq[n+1][n+1];
		for(int i=1; i<=n; i++)
			for(int j=1; j<=m; j++)
				scanf("%d", &a[i][j]);
		printf("Test %d:\n", k);
		for(int i=1; i<=n; i++)
			for(int j=1; j<=m; j++)
				cv[j][i] = a[i][j];
		for(int i=1; i<=n; i++)
			for(int j=1; j<=n; j++)
			{
				kq[i][j] = 0;
				for(int z=1; z<=m; z++)
					kq[i][j] += a[i][z] * cv [z][j];
			}	
		for( int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
				printf("%d ", kq[i][j]);
			printf("\n");
		}
	}
}
