#include <stdio.h>
#include <math.h>
int sum(int n)
{
	int tong=0;
	for(int i=n;i>0;i/=10) tong+=(i%10);
	return tong;
}
int snt(int n)
{
	for(int i=2;i<=n/2;i++)if(n%i==0)return 0;
	return 1;
}
int pt(int n)
{
	int tong=0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0&&snt(i))
		{
			tong+=sum(i);
			n/=i;
			i--;
		}
	}return tong;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(sum(n)==pt(n))printf("YES");
	else printf("NO");
}
