#include <stdio.h>
#include <math.h>
int main() {
    // put your code here
    float x1, x2, y1, y2, gipotenuza_1, gipotenuza_2, ras;
    scanf("%f %f %f %f", x1, x2, y1, y2);
    gipotenuza_1 = sqrt(x1*x1 + y1*y1);
    gipotenuza_2 = sqrt(x2*x2 + y2*y2);
    ras = gipotenuza_1 + gipotenuza_2;
    printf("%f", ras);
    return 0;
}