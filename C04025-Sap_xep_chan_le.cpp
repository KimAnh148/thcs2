#include <stdio.h>
void sxtang(int s[], int n)
{
	int temp;
	for(int i=0; i<n-1; i++ )
		for(int j=i+1; j<n; j++)
			if(s[i] > s[j])
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
}
int main()
{
	int n;
	scanf("%d", &n);
	int s[n];
	for(int i=0; i<n; i++)
		scanf("%d", &s[i]);
	sxtang(s, n);
	for(int i=0; i<n; i++)
		if(s[i] % 2 == 0)
			printf("%d ", s[i]);
	for(int i=0; i<n; i++)
		if(s[i] % 2 != 0)
			printf("%d ", s[i]);
} 


