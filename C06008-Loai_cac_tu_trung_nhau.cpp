#include<stdio.h>
#include<string.h>
int main()
{
	char c[1001];
	gets(c);
	char a[100][100];
	int n=0;
	char* token = strtok(c, " ");
	while(token != NULL)
	{
		strcpy(a[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	for(int i=0; i<n; i++)
	{
		int check = 1;
		for(int j=0; j<i; j++)
		{
			if(strcmp(a[i], a[j]) == 0)
			{
				check = 0;
				break;
			}
		}
		if(check == 1)
			printf("%s ", a[i]);
	}
} 
