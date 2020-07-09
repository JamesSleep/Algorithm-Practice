#include <stdio.h>

int main() {
    int test;
    int score[1000];

    scanf("%d", &test);
    for(int i=0; i < test; i++) {
        int number; int sum = 0; double avg;
        int avgPeople = 0;
        scanf("%d ", &number);
        for(int j=0; j < number; j++) {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = sum / number;
        for(int k=0; k < number; k++) {
            if(score[k] > avg) avgPeople++;
        }
        printf("%.3f%%\n", 
            (float)avgPeople / number * 100
        );
    }

    return 0;
}