#include <stdio.h>
#include <math.h>

const int PRIZE_2017[6] = {5000000,3000000,2000000,500000,300000,100000};
const int PRIZE_2018[5] = {5120000,2560000,1280000,640000,320000};

int PRIZE_BY_RANK_2017(int rank2017) {
    if(!rank2017 || rank2017 > 21) return 0; 
    int rankRange = 0;
    for(int i=1; i <= sizeof(PRIZE_2017) / sizeof(int); i++) {
        rankRange += i;
        if(rank2017 <= rankRange) {
            return PRIZE_2017[i-1];
        }
    }
}
int PRIZE_BY_RANK_2018(int rank2018) {
    if(!rank2018 || rank2018 > 31) return 0; 
    int rankRange = 0;
    for(int i=0; i < sizeof(PRIZE_2018) / sizeof(int); i++) {
        rankRange += pow(2,i);
        if(rank2018 <= rankRange) {
            return PRIZE_2018[i];
        }
    }
}

int main() {
    int perhaps;
    int rank_2017;
    int rank_2018;

    printf("Enter your perhaps : \n");
    scanf("%d", &perhaps);

    for(int i=0; i < perhaps; i++) {
        printf("Enter your rank : \n");
        scanf("%d %d", &rank_2017, &rank_2018);
        
        printf("%d\n",
            PRIZE_BY_RANK_2017(rank_2017) + PRIZE_BY_RANK_2018(rank_2018)
        );
    }

    return 0;
}
