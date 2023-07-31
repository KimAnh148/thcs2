#include<stdio.h> 
#include <math.h>
long long sum(int n)
{
	long long tong=0;

		for(int i=2;i<=sqrt(n);i++)
		{ 
			while(n%i==0)
			{ 
				tong += i;
				n/=i; 
			} 
		} 
		if (n>1) tong += n;
	return tong; 
}
int main()
{ 
		int n; 
		long long tong=0;
		scanf("%d",&n); 
		for(int i=0; i<n; i++)
		{
			int num;
			scanf("%d", &num);
			tong += sum(num);
		}
	printf("%lld\n", tong);
} 


