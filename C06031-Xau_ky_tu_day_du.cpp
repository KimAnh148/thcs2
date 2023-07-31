#include <stdio.h>
#include <string.h>
int xaumax( char a[])
{
	int  lis[strlen(a)];
	for (int i=0; i< strlen(a); i++)
	{
		lis[i] = 1;
		for(int j=0; j<i; j++)
		{
			if(a[i] > a[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1; 
		}
	}
	int res = 0;
	for(int i=0; i<strlen(a); i++)
	{
		if(lis[i] > res)
			res = lis[i];
	}
	return  26 - res;
}
int main()
{
	char a[51];
	scanf("%s", a);
	printf("%d", xaumax(a));
}
