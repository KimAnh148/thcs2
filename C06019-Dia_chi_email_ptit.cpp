#include <stdio.h> 
#include <string.h>
#include <ctype.h>
int main()
{
	char t[100], a[100][100];
	gets(t);
	for(int i=0; i< strlen(t); i++)
		t[i]= tolower(t[i]);
	char *token = strtok(t, " ");
	int n=0;
	while(token != NULL)
	{
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	for(int i=0; i<n-1; i++)
		printf("%c", a[i][0]);
	printf("%s@ptit.edu.vn", a[n-1] ) ;
}
