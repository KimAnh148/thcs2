#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d", &m, &n);
	int mt[m][n];
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &mt[i][j]);
	int  a,b;
	scanf("%d %d", &a, &b);
	a--;b--;
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			int x = j;
			if(j == a)
				x = b;
			if(j == b)
				x = a;
			printf("%d ", mt[i][x]);
		}
		printf("\n");
	}
	 
}
