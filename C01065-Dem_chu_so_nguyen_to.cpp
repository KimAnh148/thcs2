#include <stdio.h>
#include <string.h>
int snt(int n)
{
	for(int i = 2; i*i <= n; i++)
	{
		  if(n % i == 0)
		    return 0;
	}
	  return n > 1;
}

int main()
{
	long long n;
	int cnt[10]={0};
	scanf("%lld", &n); 
	while(n >0)
	{
		int a = n%10;
		n/=10;
		if(snt(a))
			cnt[a]++; 
	}
	for(int i=2; i<10; i++)
	{
		if(cnt[i] > 0)
			printf("%d %d\n",i,cnt[i]);
	}
	
}

