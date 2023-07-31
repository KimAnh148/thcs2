#include <stdio.h>
void sx(int n, int a[])
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i] < a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
				
			}	
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[n], i;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	sx(n,a);
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
}
