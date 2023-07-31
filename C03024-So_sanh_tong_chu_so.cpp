#include  <stdio.h>
int tong(int n)
{
	int tong=0;
	for(int a=n;a>0;a/=10)
	{
		int sc=a%10;
		tong+=sc;
	}
	return tong;
} 
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(tong(a)<=tong(b)) printf ("%d %d",a,b);
	else printf("%d %d",b,a);
}
