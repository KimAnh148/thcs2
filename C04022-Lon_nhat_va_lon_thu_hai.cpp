#include <stdio.h>
void sx(int n, int a[])
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i] < a[j])
			{
				int d = a[i];
				a[i] = a[j];
				a[j] = d;
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
	sx(n, a);
	int max1=a[0],max2;
	for(i=1; i<n; i++)
	{
		if(a[i]!=max1)
		{
			max2=a[i];
			break;
		}
	}
	printf("%d %d", max1, max2);
}
