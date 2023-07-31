#include <stdio.h>
#include <math.h>
int ktsnt(int n) 
{
	if(n<2)return 0;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}
int main ()
{ 
	int t;
	scanf("%d",&t);
	for(int m=1;m<=t;m++)
	{
		int n;
		scanf("%d",&n);
		printf("Test %d: ",m);
		for(int i=2;i<=n;i++)
		{
			if(ktsnt(i))
			{
				int dem=0;
				for(n;n%i==0;n/=i) dem++;
			
			if(dem>=1)printf("%d(%d) ",i,dem);
			}
		}
		printf("\n");
		
	}
}
