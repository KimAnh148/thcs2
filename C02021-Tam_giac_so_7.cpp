#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		int c=i+1, d=n-1; 
		for(int j=0; j<=i; j++)
		{
			a[i][j] = c;
			c+= d--;
			
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	} 
} 

