#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++) {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}

void convertToBase16(char s[], long long n)
{
    const char digits[] = "0123456789ABCDEF";
    int index = 0;

    while (n != 0) {
        int digit = n % 16;
        s[index++] = digits[digit];
        n /= 16;
    }
    s[index] = '\0';

    reverse(s);
}

int main()
{
    long long n;
    char s[100];

    printf("Enter a natural number with at most 18 digits: ");
    scanf("%lld", &n);

    convertToBase16(s, n);
    printf("%s in hexadecimal is: %s", n, s);

    return 0;
}

