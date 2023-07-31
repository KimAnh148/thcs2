#include<stdio.h>
int p[100001]={0};
int a[100001];
int main()
{
	int n, check=0;
	scanf("%d", &n);
	for(int i=0; i< 2*n - 2; i++)
	{
		scanf("%d", &a[i]);
		p[a[i]]++;
		if(p[a[i]] == n-1) 
			check=1;
	}
	if(check)
		printf("Yes");
	else
		printf("No");
} 
