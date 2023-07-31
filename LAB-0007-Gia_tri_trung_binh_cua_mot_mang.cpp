#include <stdio.h>

int main() {
    int n, i;
    double sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        double num;
        scanf("%lf", &num);
        sum += num;
    }

    double average = sum / n;
    printf("%.3f", average);

    return 0;
}

