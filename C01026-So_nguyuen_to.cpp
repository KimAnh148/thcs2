#include <stdio.h>
#include <math.h>
int main(){
   	int a, b,n;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
    scanf("%d", &n);
    int souoc = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            souoc++;
        }
    }
    if(souoc == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }}
}
