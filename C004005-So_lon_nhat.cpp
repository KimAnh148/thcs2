#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
	
	while (t--) {
        scanf("%d", &n);

        int max = 0;
        int a[100];
        int dem = 0;

        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);

            if (num > max) {
                max = num;
                dem = 0;
            }

            if (num == max) {
                a[dem++] = i;
            }
        }

        printf("%d\n", max);
        for (int i = 0; i < dem; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}

