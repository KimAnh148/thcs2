#include <stdio.h> 
int cnt1[1000001]={0}, cnt2[1000001]={0};
int main()
{
	int n;
	scanf("%d", &n);
	int a[n], i;
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		cnt1[a[i]]++;
		cnt2[a[i]]++;
	}
	int dem=0;
	for(i=0; i<n; i++)
		if(cnt1[a[i]] > 1)
		{
			dem++;
			cnt1[a[i]]=0;
		}
	printf("%d\n", dem);
	for(i=0; i<n; i++)
		if(cnt2[a[i]] > 1)
		{
			printf("%d ",a[i]);
			cnt2[a[i]]=0;
		}
	
}

