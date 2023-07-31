#include<stdio.h>
int snt(int n)
{
	if(n<2)
		return 0;
	for(int i=2; i*i<=n; i++)
		if(n%i == 0)
			return 0;
	return 1;
}
int check(int n)
{
	int sum=0;
	while(n)
	{
		sum += n%10;
		n/=10;
	}
	if(sum%5==0)
		return 1;
	else 
		return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	int cnt=0;
	for(int i=1; i<n; i++)
	{
		if(check(i) && snt(i))
		{
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n%d", cnt);
}
