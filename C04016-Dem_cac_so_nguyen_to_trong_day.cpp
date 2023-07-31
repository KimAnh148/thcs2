#include <stdio.h>
int snt(int n)
{
	if(n <= 1) return 0;
	else 
	{
		for(int i=2; i<n; i++)
			if(n%i==0) return 0;
		return 1;
	}
}
void sx(int n, int a[])
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i] > a[j])
			{
				int d = a[i];
				a[i] = a[j];
				a[j] = d;
			}
		}
	}
} 
int cnt[100001]={0};
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		printf ("Test %d:\n",i);
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0; i<n; i++)
			scanf("%d",&a[i]);
		sx(n,a);
		for(int i=0; i<n; i++)
		cnt[a[i]]++;
		for(int i=0; i<n; i++)
			if(snt(a[i]) && cnt[a[i]] != 0)
			{
				printf("%d xuat hien %d lan\n",a[i],cnt[a[i]]);
				cnt[a[i]]=0;
			}		
	}
}
