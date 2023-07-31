#include<stdio.h> 
int main() {
    int t; 
    scanf("%d", &t);
    while (t--) {
        int n; 
        scanf("%d", &n);
        int a[50];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        int dem = 1; 
        int gtr = a[0]; 
        for (int i=1; i<n; i++) {
            if (a[i] >= gtr) {
                dem++; 
                gtr = a[i]; 
            }
        }
        printf("%d\n", dem);
    }
}

