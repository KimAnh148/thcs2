#include <stdio.h> 
#include <string.h> 

void dao(int a[], int n) 
{ 
	int l=0, r=n-1; 
	while(l<r) 
	{ 
		int tmp = a[l]; 
		a[l] = a[r]; 
		a[r] = tmp; 
		++l; 
		--r; 
	} 
} 
void sub(char a[], char b[]) 
{ 
	int n1 = strlen(a), n2 = strlen(b), n=0; 
	int x[n1], y[n1], z[n1]; 
	for(int i=0; i<n1; i++) 
		x[i] = a[i] - '0'; 
	for(int i=0; i<n2; i++) 
		y[i] = b[i] - '0'; 
	dao(x, n1); 
	dao(y, n2); 
	for(int i=n2; i<n1; i++) 
	{ 
		y[i] = 0; 
	} 
	int rem=0; 
	for(int i=0; i<n1; i++) 
	{ 
		int tmp= x[i] - y[i] - rem;
		if(tmp < 0) 
		{
			z[i]=10+tmp; 
			rem=1; 
		} 
		else 
		{ 
			z[i]=tmp; 
			rem=0; 
		} 
	} 
	int check=n1-1; 
	while(z[check]==0)
	{ 
		check--; 
	} 
	for(int i=check; i>=0; i--) 
	{ 
		printf("%d",z[i]); 
	} 
	printf("\n"); 
}
int main() 
{ 
	int t; 
	scanf("%d",&t); 
	while(t--) 
	{ 
		char c[1001], d[1001]; 
		scanf("%s%s",c,d); 
		if( (strlen(c) > strlen(d)) || (strlen(c)==strlen(d) && strcmp(c,d)>0)) 
		{
			sub(c,d);
		}
		else 
			sub(d,c);
	} 
	return 0; 
}
