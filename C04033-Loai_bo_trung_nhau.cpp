#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n], i, b[n];
	for(i=0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 1;
	}
	for(i=0; i<n; i++)
	{
		if(b[i]==0) continue;
		for(int j=i+1; j<n; j++)
			if(a[i]==a[j]) 
				b[j]=0;
	}
	for(i=0; i<n; i++)
		if(b[i] != 0)
			printf("%d ", a[i]);
}
