#include<stdio.h>
void solve(int a[1000], int n)
{
	int check=1;
	for(int i=0; i<n-1;i++)
	{
		for(int j=0; j<n-i-1; j++)
			if(a[j] > a[j+1])
			{
				int tmp=a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
				check=1;
			}
		if(!check) break;
		check=0;
		printf("Buoc %d:", i+1);
		for(int j=0; j<n; j++)
			printf(" %d", a[j]);
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[1000];
	for(int i=0; i<n;i++)
		scanf("%d", &a[i]);
	solve(a,n);
}
