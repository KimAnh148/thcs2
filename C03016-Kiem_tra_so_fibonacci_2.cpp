#include <stdio.h>
long long fb[100];
void dayfb()
{
	fb[0]=0;
	fb[1]=1;
	for(int i=2; i<= 92; i++)
	{
		fb[i]= fb[i-1]+fb[i-2];
	}
}
int main()
{
	dayfb();
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		int check=0;
		for(int i=0; i<=92; i++)
			if(n==fb[i]) check=1;
		if(check==1)
			printf("YES\n");
		else 
			printf("NO\n");
	}
}
