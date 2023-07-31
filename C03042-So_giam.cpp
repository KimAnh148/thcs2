#include <stdio.h>
int sogiam(int n)
{
	for(n;n>=10;n/=10)
	{
		if(n%10>=(n/10)%10)return 0;
	}return 1;
}

int main()
{
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		int dem=0;
		scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++)
		{
			if(sogiam(i))dem++;
		}
		if(dem!=0)printf("%d\n",dem);
	}
}	

