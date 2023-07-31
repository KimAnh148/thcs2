#include<stdio.h>
int main()
{
	int t,n,m,p;
	scanf("%d",&t);
	int a[100],b[100];
	for(int j = 1; j <= t; j++)
	{
		scanf("%d %d %d", &n, &m, &p);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<m;i++)
			scanf("%d",&b[i]);
		for(int i=m+n-1;i>=p;i--) 
			a[i]=a[i-m];
		for(int i=p;i<m+p;i++) 
			a[i]=b[i-p];
		printf("Test %d:\n",j);
		for(int i=0;i<=m+n-1;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
}
