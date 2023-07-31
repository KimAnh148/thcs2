#include <stdio.h>
long long fb[100];
void dayfb()
{
	fb[0]=0;
	fb[1]=1;
	for(int i=2;i<=92;i++)
	{
		fb[i]=fb[i-1]+fb[i-2];
	}
}
int main()
{
	dayfb();
	long long n;
	scanf("%lld",&n);
	int check=0;
	for(int i=0;i<=92;i++)
	{
		if(fb[i]==n) check=1;
	}
	if(check) printf("1");
	else printf("0");
}
