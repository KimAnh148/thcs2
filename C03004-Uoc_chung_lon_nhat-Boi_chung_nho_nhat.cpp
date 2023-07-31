#include <stdio.h>
 int ucln(long long a, long long b)
 {
 	if(a%b==0) return b;
	 else return ucln(b,a%b) ;
 }
 int bcnn(long long a, long long b)
 {
 	return a*b/ucln(a,b);
 }
  main()
 {
 	long long a,b;
 	scanf("%lld %lld", &a,&b);
 	printf("%lld\n%lld", ucln(a,b),bcnn(a,b));
 }
