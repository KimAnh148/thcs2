#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    scanf("%d%d%d%d", &x3, &y3, &x4, &y4);    
    int max_x = x2 > x4 ? x2 : x4;
    int max_y = y2 > y4 ? y2 : y4;
    int min_x = x1 < x3 ? x1 : x3;
    int min_y = y1 < y3 ? y1 : y3;
    int delta_x = max_x - min_x;
    int delta_y = max_y - min_y;
    int side = delta_x > delta_y ? delta_x : delta_y;
    int area = side * side;
    printf("%d", area);
    return 0;
}


