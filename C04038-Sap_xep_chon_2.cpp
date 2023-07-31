#include <stdio.h>
void chon2(int s[], int n)
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
		for(int k=0; k<n; k++)
			printf("%d ", s[k]);
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
	chon2(s, n);
}
