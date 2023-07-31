#include<stdio.h>
int snt(int n)
{
	if(n<2) return 0;
	for(int i=2; i*i<=n; i++)
		if(n%i==0)
			return 0;
	return 1;
}
int check(int n)
{
	int sum=0;
	while(n)
	{
		int tmp=n%10;
		if(!snt(tmp))
			return 0;
		sum += tmp;
		n/=10;
	}
	if(!snt(sum))
		return 0;
	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt=0;
		for(int i=a; i<=b; i++)
			if(check(i) && snt(i))
				cnt++;
		printf("%d\n", cnt);
	}
}
