#include <stdio.h>
int main ()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n, m, x;
		scanf("%d %d %d", &n, &m, &x);
		int a[n][m];
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				scanf("%d",&a[i][j]);
		for(int i=0; i<n; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if(a[i][x-1] > a[j][x-1])
				{
					int temp = a[i][x-1];
					a[i][x-1] = a[j][x-1];
					a[j][x-1] = temp; 
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
				printf ("%d ",a[i][j]);
			printf ("\n");
		}
		printf ("\n");
			
	}
}
