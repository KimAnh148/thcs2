#include <stdio.h>
#include <string.h> 
int check(char s[1000])
{
	int a[10]={0};
	if(s[0]=='0')
		return 0;
	for(int i=0; i < strlen(s); i++)
	{
		if('0'<= s[i] && s[i] <= '9')
			a[s[i]-'0']++;
		else 
			return 0;
	}
	for(int i=0; i<10; i++)
		if(a[i] == 0)
			return 1;
	return 2;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char a[1000];
		scanf("\n");
		gets(a);
		if(check(a) == 0)
			printf("INVALID\n");
		if(check(a) == 1)
			printf("NO\n");
		if(check(a) == 2)
			printf("YES\n");
	}
}
