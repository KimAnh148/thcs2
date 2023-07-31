#include <stdio.h>
#include <math.h>
int snt(int n)
{
	if(n<2)return 0;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;	 
 } 
int fibo(int n)
{
	if (n==0||n==1)return 1;
	int fn2=0,fn1=1;
	for(int i=3;i<=93;i++)
	{
		int fn=fn2+fn1;
		if(fn==n)return 1;
		fn2=fn1;
		fn1=fn;
	}return 0;
 } 

int ktsfb(int n)
{
	int tong=0,a=n;
	for(a;a>0;a/=10)
	{
		int sc=a%10;
		tong+=sc;
	}
	if(fibo(tong)) return 1;
	else return 0;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
	 int l = a; 
	 a = b; 
	 b = l; 
	}for(int i=a;i<=b;i++)if(snt(i)&&ktsfb(i)) printf("%d ",i);

}
