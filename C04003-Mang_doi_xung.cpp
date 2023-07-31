#include <stdio.h>
int main()
{
    int t, n, i, j;
	scanf("%d", &t);
	while (t--)
    {
        scanf("%d", &n);
        int a[n];
		for (i = 0; i < n; i++)scanf("%d", &a[i]);
        for (i = 0, j = n - 1; i < j; i++, j--)
        {
            if (a[i] != a[j])
            {
                printf("NO\n");
                break;
            }
        }

        if (i >= j)printf("YES\n");
    }

    return 0;
}

