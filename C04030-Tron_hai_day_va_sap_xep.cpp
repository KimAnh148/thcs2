#include <stdio.h>
void tr(int s1[], int s2[], int tron[], int n)
{
	int ch=0, le=0;
	for(int i=0; i<2*n; i++)
	{
		if(i%2 == 0)
		{
			tron[i] = s1[ch];
			ch++;
		}
		else
		{
			tron[i] = s2[le];
			le++;
		}
	}
	for(int i=0; i<2*n; i++)
		printf("%d ", tron[i]);
}
void sx( int s1[], int s2[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(s1[i] > s1[j])
			{
				int temp = s1[i];
				s1[i] = s1[j];
				s1[j] =temp;
			}
			if(s2[i] < s2[j])
			{
				int temp = s2[i];
				s2[i] = s2[j];
				s2[j] = temp;
			}
		} 
	}
}
int main()
{
	int t,n;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%d",&n);
		int s1[n], s2[n], tron[2*n];
		for(int j=0; j<n; j++)
			scanf("%d", &s1[j]);
		for(int j=0; j<n; j++)
			scanf("%d", &s2[j]);
		printf("Test %d:\n", i);
		sx(s1, s2, n);
		tr(s1, s2, tron, n);
		
		printf("\n");
	}
}
