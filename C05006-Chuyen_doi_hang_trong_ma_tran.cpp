#include <stdio.h> 
int main() 
{ 
	int a,b; 
	scanf("%d%d",&a,&b); 
	int arr[a][b]; 
	for(int i=0;i<a;i++) 
		for(int j=0;j<b;j++) 
			scanf("%d",&arr[i][j]);
	int c,d; 
	scanf("%d%d",&c,&d); 
	for(int i=0;i<a;i++) 
	{ 
		int x=i; 
		if(i==(c-1)) 
			x=d-1; 
		if(i==(d-1)) 
			x=c-1; 
		for(int j=0;j<b;j++) 
			printf ("%d ",arr[x][j]);
		printf("\n"); 
	} 
}
