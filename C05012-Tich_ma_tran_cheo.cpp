#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	for(int tc =1; tc<=t; tc++)
	{
		int n;
		scanf("%d", &n);
		int a[n][n], cv[n][n], tich[n][n];
		printf("Test %d:\n", tc);
		for(int i=0; i<n; i++)
		{
			int k=1;
			for(int j=0; j<n; j++)
			{
				if(j<=i) a[i][j] = k++;
				else a[i][j] = 0;
			}
		}
		
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cv[j][i] = a[i][j];
				
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
			{
				tich[i][j] = 0;
				for(int k=0; k<n; k++)
					tich[i][j] += a[i][k] * cv[k][j];
			}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
				printf("%d ", tich[i][j]);
			printf("\n");
		}
	}
}
