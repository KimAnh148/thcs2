#include <stdio.h>
 long long ucln(long long a, long long b)
 {
 	if(a%b==0) return b;
	 else return ucln(b,a%b) ;
 }
 long long bcnn(long long a, long long b)
 {
 	return a*b/ucln(a,b);
 }
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld\n",bcnn(a,b),ucln(a,b));
	}
}

