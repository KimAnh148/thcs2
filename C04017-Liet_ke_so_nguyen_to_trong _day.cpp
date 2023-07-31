#include <stdio.h>
int snt(int n)
{
	if(n <= 1) return 0;
	else 
	{
		for(int i=2; i<n; i++)
			if(n%i==0) return 0;
		return 1;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[n],i;
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	int dem=0;
	for(i=0; i<n; i++)
		if(snt(a[i])) dem++;
	printf("%d ",dem);
	for(i=0; i<n; i++)
		if(snt(a[i])) printf("%d ",a[i]);
}
