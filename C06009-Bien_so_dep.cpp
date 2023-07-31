#include <stdio.h>
#include <string.h>
int dep1(char b[20])
{
	if(b[6] + 1 == b[7] && b[7] + 1 == b[8] && b[8] + 1 == b[10] && b[10] + 1 == b[11])
		return 1;
	else 
		return 0;
}
int dep2(char b[20])
{
	if(b[6] == b[7] && b[7] == b[8] && b[8] == b[10] && b[10] == b[11])
		return 1;
	else 
		return 0;
 } 
int dep3(char b[20])
{
	if(b[6] == b[7] && b[7] == b[8] && b[10] == b[11])
		return 1;
	else 
		return 0;
}
int dep4(char b[20])
{
	if ((b[6] == '6'|| b[6] == '8') && (b[7] == '6'|| b[7] == '8') && (b[8] == '6'|| b[8] == '8') && (b[10] == '6'|| b[10] == '8') && (b[11] == '6'|| b[11] == '8') )
		return 1;
	else 
		return 0;
}
void check(char b[20])
{
	if(dep1(b) || dep2(b) || dep3(b) || dep4(b))
		printf("YES\n");
	else
		printf("NO\n");
}
int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("\n");
		char b[20];
		gets(b);
		check(b);
	}
}
