#include <stdio.h>
int main()
{
    float d1, d2, d3;
    scanf("%f", &d1);
    printf("%.2f\n", (d1 * 0.95) + (d1 * 0.07));
    scanf("%f", &d2);
    printf("%.2f", ((d1 + d2) * 0.85) + ((d1 + d2) * 0.07));
    scanf("%f",&d3);
    printf("%.2f", ((d1 + d2 + d3) * 0.75) + ((d1 + d2 + d3) * 0.07));
    return 0;
}