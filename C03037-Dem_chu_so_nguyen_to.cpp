#include <stdio.h>
#include <string.h>

#include <math.h>
int ktsnt(int x)
{
	if(x<2)return 0;
	for(int i=2;i<=sqrt(x);i++)if(x%i==0)return 0;
	return 1;
}
int main()
{
	char a[18];
	int b[18]={0};
	scanf("%s", a);
	for(int i=0; i< strlen(a); i++)
		b[a[i]-'0']++;
	for(int i=0; i< strlen(a); i++)
	{
		if(ktsnt(a[i]-'0') && b[a[i]-'0'] != 0)
			printf("%d %d\n", a[i]-'0', b[a[i]-'0']);
		b[a[i]-'0']=0;
	}
}
