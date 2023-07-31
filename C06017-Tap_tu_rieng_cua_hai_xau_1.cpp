#include<stdio.h>
#include<string.h>
void sxtudien(int x, char s[1000][1000])
{
	char temp[100] = "";
	for(int i=0; i < x; i++)
	{
		for(int j=i+1;j <x; j++)
		{
			if(strcmp(s[i], s[j]) > 0)
			{
				strcpy(temp, s[i]);
				strcpy(s[i], s[j]);
				strcpy(s[j], temp);
			}
		}
	}
}
int main()
{
	char s1[1000], s2[1000], a[1000][1000], b[1000][1000];
	gets(s1);
	gets(s2);
	int n=0, m=0;
	char *token = strtok(s1, " ");
	while(token != NULL)
	{
		strcpy(a[n++], token);
		token= strtok(NULL, " ");
	}
	token = strtok(s2, " ");
	while(token != NULL)
	{
		strcpy(b[m++], token);
		token= strtok(NULL, " ");
	}
	sxtudien(n, a);
	for (int i=0; i<n; i++)
	{
		while(strcmp(a[i], a[i+1]) == 0)
			i++;
		int check=1;
		for(int j=0; j<m; j++)
		{
			if(strcmp(a[i], b[j]) == 0)
			{ 
				check=0;
				break;
			}
		}
		if(check) printf("%s ", a[i]);
	}
	 
} 
