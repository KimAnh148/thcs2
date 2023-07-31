#include<stdio.h>
int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, p;
		scanf("%d %d", &n, &p);
		int x=0;
		for(int i=p; i<n; i*=p)
			x += n/i;
		printf("%d\n",x);
	}
}
