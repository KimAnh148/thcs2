#include <stdio.h>
void doitien(int n)
{
	int cnt=0;
	int tien[10]={1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	for(int i=0; i<10; i++)
	{
		cnt += n/tien[i];
		n = n%tien[i];
	} 
	printf("%d\n", cnt);
} 
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		doitien(n);
	}
}
