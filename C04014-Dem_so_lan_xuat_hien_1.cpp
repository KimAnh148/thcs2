#include <stdio.h>
int cnt[1000001]={0};
int main()
{
	int n;
	scanf("%d",&n);
	int a[n], i;
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(i=0; i<n; i++)
	{
		cnt[a[i]]++;
	}
	for(i=0; i<n; i++)
		if(cnt[a[i]] != 0)
		{
			printf("%d %d\n",a[i],cnt[a[i]]);
			cnt[a[i]]=0;
		}
}
