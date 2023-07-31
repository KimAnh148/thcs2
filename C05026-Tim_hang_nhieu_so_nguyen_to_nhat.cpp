#include <stdio.h>
int snt(int x){
	if (x < 2) return 0;
	for (int i = 2; i*i<=x; i++)
		if (x % i == 0) return 0;
	return 1;
}

int main(){
	int n, a[31][31];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
		a[i][n] = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
			if (snt(a[i][j])) 
				a[i][n]++;
		}
	int max = 0, h = 1;
	for (int i = 0; i < n; i++)
		if (max < a[i][n]){
			max = a[i][n];
			h = i;
		}

	printf("%d\n", h + 1);
	for (int i = 0; i < n; i++)
		if (snt(a[h][i])) 
			printf("%d ", a[h][i]);
}
