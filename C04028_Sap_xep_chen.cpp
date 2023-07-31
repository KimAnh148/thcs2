#include <stdio.h>
void sxchen(int s[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			int min=i;
			if(s[min] > s[j])
					min=j;
			int temp = s[j];
			s[j] = s[min];
			s[min] = temp;
		}
		printf ("Buoc %d: ", i);
		for(int j=0; j<=i; j++)
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
	sxchen(s,n);
}
