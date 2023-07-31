#include <stdio.h>
#include <string.h>
void dao( int a[], int n)
{
	int l=0, r = n - 1;
	while(l<r)
	{
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		l++;
		r--;
	}
}
void sum(char a[], char b[])
{
	int n1 = strlen(a), n2 = strlen(b);
	int x[n1], y[n1], z[n1 + 1];
	for(int i=0; i<n1; i++) 
		x[i] = a[i] - '0';
	for(int i=0; i<n2; i++) 
		y[i] = b[i] - '0';	
	dao(x, n1);
	dao(y, n2);
	for(int i=n2; i<n1; i++)
		y[i] = 0;
	int nho=0, n=0 ;
	for(int i=0; i<n1; i++)
	{
		int tmp = x[i] + y[i] + nho;
		z[n++] = tmp%10;
		nho = tmp/10;
	}
	if(nho == 1) z[n++] = nho;
	for(int i=n-1; i>=0; i--)
		printf("%d", z[i]);
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char s1[501], s2[501];
		scanf("%s\n%s", s1, s2);
		if(strlen(s1) >= strlen(s2))
			sum(s1, s2);
		else 
			sum(s2, s1);
		printf("\n");
	}
}

