#include <stdio.h>
#include <math.h>
int ktsnt(int x)
{
	if(x<2)return 0;
	for(int i=2;i<=sqrt(x);i++)if(x%i==0)return 0;
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	for(int i=2;a<n;i++)
	{
		if(ktsnt(i))
		{
			printf("%d\n",i);
			a++;
		}
	}
	
	return 0; 
}
