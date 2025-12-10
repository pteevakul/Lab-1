#include <stdio.h>

int main()
{

    int hour, min, sec;

    printf("Enter time (h:m:s)");
    scanf("%d:%d:%d", &hour, &min, &sec);
    printf("hour:%d\nminute:%d\nsecond:%d\n", hour, min, sec);

    return 0;
}