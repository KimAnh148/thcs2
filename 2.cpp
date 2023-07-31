#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void removeSubString(char s1[], char s2[]) 
{
    int i, j;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (i = 0; i < len1; i++) 
	{
        for (j = 0; j < len2 && i+j < len1; j++) 
		{
            if (s1[i+j] != s2[j]) 
			{
                break;
            }
        }

        if (j == len2) 
		{ 
            for (j = 0; j < len2; j++) 
			{
                s1[i+j] = ' ';
            }
        }
    }
}

int main() {
    char s1[MAX_LEN], s2[MAX_LEN];
    
    fgets(s1, MAX_LEN, stdin);
    s1[strcspn(s1, "\n")] = 0; 

    fgets(s2, MAX_LEN, stdin);
    s2[strcspn(s2, "\n")] = 0; 

    removeSubString(s1, s2);

    printf("%s", s1);

    return 0;
}

