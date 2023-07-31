#include <stdio.h>
#include <math.h>
int dem(int n)
 {
 	int i; 
 	int count=0;
 	for(i=1;i<=sqrt(n);i++)
 	{
 		if(n%i==0)
 		{
 			if(i%2==0)count++;
 			if(i!=n/i&&n/i%2==0)count++;
		 }
	 }
	 return count;
 }
 int main()
 {
 	int t;
 	scanf("%d",&t);
 	while(t--)
 	{
 		int n;
 		scanf("%d",&n);
 		printf("%d\n",dem(n));
	 }
 }
