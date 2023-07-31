#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d",&a, &b);
	if(b!=0){printf("%d %d %d ",a+b, a-b, a*b);
			 float c=a;
			 float d=b;
			 printf("%.2f %d",c/d,a%b);}
	else{printf("0");}
} 
