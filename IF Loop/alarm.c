#include <stdio.h>

int main() {
    int hour;
    int minute;

    scanf("%d %d", &hour, &minute);

    if(minute < 45) {
        minute = 60 + ( minute - 45 );
        if(hour < 1) hour = 23;
        else hour--;
    } else minute -= 45;

    printf("%d %d", hour, minute);

    return 0;
}