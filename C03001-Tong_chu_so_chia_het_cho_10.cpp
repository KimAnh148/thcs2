#include <stdio.h>
int tong10(int x)
{
	int y,tong=0;
	for(x;x>0;x/=10)
	{
		y=x%10;
		tong+=y;
	} 
	if(tong%10==0)return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(tong10(n)==1) printf("YES\n");
		else printf("NO\n");
	}
}
