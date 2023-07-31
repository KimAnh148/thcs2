#include <stdio.h>
#include <string.h>

int main() {
    char S1[100], S2[100], temp[100];
    gets(S1); 
    scanf("%s", S2);

    int len1 = strlen(S1);
    int len2 = strlen(S2);
    int i = 0, j = 0, k = 0;

    for (i; i < len1; i++) 
	{
        if (S1[i] != S2[j]) 
		{
            temp[k++] = S1[i++]; 
            j++;
            if (j == len2) 
			{ 
                j = 0;
                while (i < len1 && S1[i] != ' ') 
                    i++; 
            }
        }
    }

    temp[k] = '\0';
    printf("%s\n", temp);
    return 0;
}


