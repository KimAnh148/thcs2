#include <stdio.h>
int snt(int n)
{
	if(n<=1)return 0;
	for(int i=2;i*i<=n;i++)if(n%i==0)return 0;
	return 1;
		
} 
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		int a[100];
		scanf("%d",&n);
		if(n<=100)
		{
			for(int i=0;i<n;i++) scanf("%d",&a[i]);
			for(int i=0;i<n;i++) if(snt(a[i])) printf("%d ",a[i]);
		}
		printf("\n");
		
	} 
}
