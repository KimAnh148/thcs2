#include <stdio.h>
void sx(int s[], int n)
{
	for(int i = 0; i < n-1; i++) 
	{ 
		int min = i; 
		for(int j = i+1; j < n; j++) 
		{ 
			if(s[j] < s[min]) 
			{
				int tmp = s[j]; 
				s[j] = s[min]; 
				s[min] = tmp; 
			} 
		} 
		printf("Buoc %d: ", i+1); 
		for(int i = 0; i < n; i++) 
		{ 
			printf("%d ", s[i]); 
		} 
		printf("\n"); 
	}
	
} 
int main()
{
	int n;
	scanf("%d", &n);
	int s[n];
	for(int i=0; i<n; i++)
		scanf("%d", &s[i]);
	sx(s, n);
}
