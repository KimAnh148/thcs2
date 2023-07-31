#include <stdio.h> 
void dem(int a[], int n)
{
	int cnt=1, max=1; 
		for (int i=0; i<n-1; i++) 
		{ 
			if (a[i]<a[i+1]) 
			cnt++; 
			else 
			{ 
				if (max<cnt) 
					max=cnt;
				cnt=1; 
			} 
		} 
		printf("%d\n",max); 
		int in=1; 
		for (int i=0; i<n-1; i++) 
		{ 
			if (a[i]<a[i+1]) in++; 
			else in=1; 
			if (in==max) 
			{ 
				for (int j=i+1-max+1; j<=i+1; j++) 
				{ 
					printf("%d ",a[j]); 
				} 
			printf("\n"); 
			} 
		} 
}
int main () 
{ 
	int t; 
	scanf("%d",&t); 
	for (int dt=1; dt<=t; dt++) 
	{ 
		int n; 
		scanf("%d",&n); 
		int a[n]; 
		for (int i=0; i<n; i++) 
			scanf("%d",&a[i]); 
		printf("Test %d:\n",dt);
		dem(a, n);
	} 
}
