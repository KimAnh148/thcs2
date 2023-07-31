#include<stdio.h>
int main()
{
	int n, m, k, a[1000]= {0}, x=0;
	scanf("%d%d%d", &n, &m, &k);
	for(int i=0; i<m; i++)
	{
		scanf("%d", &x);
		int tr = (x-k<1)? 1: x-k;
		int ph = (x+k<n)? x+k: n;
		for(int j=tr; j<=ph; j++)
			a[j]=1;
	}	
	int vt=1, ans=0;
	for(vt; vt<=n; vt++)
		if(!a[vt])
		{
			ans++;
			vt+=2*k;
		}
	printf("%d", ans);
	
}
