#include<stdio.h> 
#include<math.h>
 void phantichsnt(int n)
 { 
 	printf("%d = ",n);
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i==0)
		{ 
			int somu=0;
			for(n;n%i==0;n/=i)somu++; 
			printf("%d^%d",i,somu); 
			if(n!=1) printf(" * ");
		}
	}
		if(n!=1) printf("%d^1",n); 
}
 int main()
{
	int t; 
	scanf("%d",&t); 
	while(t--)
	{ 
		int n; 
		scanf("%d",&n); 
		phantichsnt(n);
		 printf("\n"); 
	} 
}
