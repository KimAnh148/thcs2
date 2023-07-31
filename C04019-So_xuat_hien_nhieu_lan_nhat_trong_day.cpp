#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		int cnt[30001]={0};
		scanf("%d", &n);
		int s[n];
		for(int i=0; i<n; i++)
		{
			scanf("%d", &s[i]);
			cnt[s[i]]++;
		}
		int max=0;
		for(int i=0; i<n; i++)
			if(max < cnt[s[i]])
				max = cnt[s[i]];
		for(int i=0; i<n; i++)	
			if(max == cnt[s[i]])
			{
				printf("%d ", s[i]);
				cnt[s[i]]=0;
			}
		printf("\n");
	}
} 
