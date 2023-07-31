#include <stdio.h>
#include <math.h>
void umax(long long  n)
{
	long long max;

		for(int i=2;i<=sqrt(n);i++)
		{ 
			while(n%i==0)
			{ 
				max = i;
				n/=i; 
			} 
		} 
		if (n>1)
			max=n ;
		printf ("%lld", max); 
}
int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		umax(n);
		printf("\n");	
	}
}

