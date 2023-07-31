#include <stdio.h>
int main ()
{
	int n,m,p;
	scanf("%d %d\n",&n,&m);
	int a[100],b[100];
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<m;i++)scanf("%d",&b[i]);
	scanf("%d",&p);
	for(int i=m+n-1;i>=p;i--) a[i]=a[i-m];
	for(int i=p;i<m+p;i++) a[i]=b[i-p];
	for(int i=0;i<=m+n-1;i++)printf("%d ",a[i]);
}
