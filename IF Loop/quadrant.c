#include <stdio.h>

int main() {
    int x, y;

    printf("Enter X location");
    scanf("%d",&x);
    printf("Enter Y location");
    scanf("%d",&y);

    if(x > 0) {
        if(y > 0) printf("%d",1);
        if(y < 0) printf("%d",4);
    }
    if(x < 0) {
        if(y > 0) printf("%d",2);
        if(y < 0) printf("%d",3);
    }

    return 0;
}