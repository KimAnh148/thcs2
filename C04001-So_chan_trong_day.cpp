#include <stdio.h>
int main()
{
	int t, n;
	scanf("%d",&t);
	while(t--)
	{
		int a[100];
		scanf("%d",&n);	
		if(n<=100)
		{
			for(int i=0;i<n;i++)scanf("%d",&a[i]);
			for(int i=0;i<n;i++) 
			{
				if(a[i]%2==0) printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
}
