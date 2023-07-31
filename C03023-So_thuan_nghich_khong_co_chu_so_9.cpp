#include<stdio.h>
int check(int n)
{
	int x=n, tmp=0,cnt=0;
	while(n)
	{
		tmp= tmp*10+n%10;
		if((n%10)==9)
			cnt++;
		n/=10;
	}
	if(x==tmp && cnt==0)
		return 1;
	else
		return 0;
} 
int main()
{
	int n, cnt=0; 
	scanf("%d", &n);
	for(int i=2; i<n; i++)
	{
		if(check(i))
		{
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n%d", cnt);
}

