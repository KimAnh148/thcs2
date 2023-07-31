#include<stdio.h>
int main(){
	long long a,b;
	scanf("%lld %lld",&a, &b);
	printf("%lld\n%lld\n%lld\n", a+b,a-b,a*b);
	float c=a, d=b;
	printf("%lld\n%lld\n%.2lf", a/b,a%b, c/d);
	
} 
