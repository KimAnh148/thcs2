#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000], a[1000] = {0};
	scanf("%s", s);
	for(int i=0; i<strlen(s); i++)
		a[s[i]]++;
	if(a['('] != a[')'] || a['['] != a[']'] || a['{'] != a['}'] || a['\''] %2 != 0 || a['\"'] != 0)
		printf("0");
	else 
		printf("1");
} 
