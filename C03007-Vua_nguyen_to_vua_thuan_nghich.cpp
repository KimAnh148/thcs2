#include <stdio.h>
#include <math.h>
int ktsnt(int n)
{
	if(n<2)return 0;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;	 
 }
 int thng(int n)
 {
 	int a,sc,kq=0;
 	a=n;
 	for(a;a!=0;a/=10)
 	{
 		sc=a%10;
 		kq= kq*10+sc;
	 }
	if(n==kq)return 1;
	else return 0;
 }
 int main()
 {
 	int t;
 	scanf("%d",&t);
 	while(t--)
 	{
 		int a,b,dem=0;
 		scanf("%d %d",&a,&b);

 		for(int i=a;i<=b;i++)
 		{
 			if(ktsnt(i)&&thng(i))
 			{
 				printf("%d ",i);
 				dem++;
 				if(dem==10)
 				{ printf("\n");
 				dem=0;
				 }
			 }
		 }
	 printf("\n");
	}
 }
