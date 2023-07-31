#include <stdio.h>
void sxchon(int s[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int min=i;
		for(int j=i+1; j<n; j++)
			if(s[j] < s[min])
				min=j;
		int temp = s[i];
		s[i] = s[min];
		s[min] = temp;
		printf ("Buoc %d: ", i+1);
		for(int j=0; j<n; j++)
			printf("%d ", s[j]);
		printf("\n");
	}
} 
int main ()
{
	int n;
	scanf("%d", &n);
	int s[n];
	for(int i=0; i<n; i++)
		scanf("%d", &s[i]);
	sxchon(s,n);
}
