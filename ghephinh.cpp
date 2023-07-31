#include<stdio.h>
#include<math.h>
int main(){
    int w1, w2, w3, h1, h2, h3;
    scanf("%d%d", &w1, &h1);
    scanf("%d%d", &w2, &h2);
    scanf("%d%d", &w3, &h3);
    int total_area = w1*h1 + w2*h2 + w3*h3;
    if(total_area % 4 != 0) { 
        // kh�ng th? chia th�nh 4 � vu�ng b?ng nhau
        printf("NO\n");
        return 0;
    }
    int square_side = sqrt(total_area / 4);
    if(w1 % square_side == 0 && h1 % square_side == 0
       && w2 % square_side == 0 && h2 % square_side == 0
       && w3 % square_side == 0 && h3 % square_side == 0) {
        // c�c h?nh ch? nh?t c� th? chia th�nh c�c � vu�ng b?ng nhau
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

