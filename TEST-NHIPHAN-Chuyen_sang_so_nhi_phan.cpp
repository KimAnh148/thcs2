#include <stdio.h>
int main ()
{
	int n;
	scanf("%d", &n);
	int a[10];
	int i=0;
	if(n==0) printf("0");
	for(n; n>0; n/=2)
		{
			a[i] = n%2;
			i++;
		}
	for(int j=i-1; j>=0; j--)
		printf("%d", a[j]);
}

