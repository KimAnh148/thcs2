#include <stdio.h>
 int main()
 {
 	int t,n;
 	long long fb[100];
 	fb[1]=1;
 	fb[2]=1;
 	for(int i=3;i<=92;i++) fb[i]=fb[i-1]+fb[i-2];
 	scanf("%d",&t);
 	while(t--)
 	{
 		scanf("%d",&n);
 		printf("%lld\n",fb[n]);
	 }
 }
