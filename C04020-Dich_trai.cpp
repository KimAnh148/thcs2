#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n], i;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	int k;
	scanf("%d", &k);
	for(i=k; i<n; i++)
		printf("%d ", a[i]);
	for(i=0; i<k; i++)
		printf("%d ", a[i]);
} 
