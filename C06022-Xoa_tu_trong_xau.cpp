#include <stdio.h>
#include <string.h>
#include <ctype.h>
int str1(char a[], char b[])
{
	if(strlen(a) != strlen(b))
		return 0;
	for(int i=0; i< strlen(a); i++)
		if(tolower(a[i]) != tolower(b[i]))
			return 0;
} 
int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	for(int i=1; i <= t; i++)
	{
		char a[200], b[20];
		gets(a);
		scanf("\n");
		scanf("%s", b);
		getchar();
		char *token= strtok(a, " ");
		printf("Test %d: ", i);
	
		while(token != NULL)
		{
			if(str1(token, b) == 0)
				printf("%s ", token);
			token= strtok(NULL, " ");
		} 
		printf("\n");
	}
} 
