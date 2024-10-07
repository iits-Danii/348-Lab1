#include <stdio.h>


int main() {
    int total_score;

    while (1) {
        printf("Enter a score (must be a value greater than 1 or program will stop): ")
        scanf("%d", &score);

        if (score <= 1) {
            break;
        }

    }
}

void find_combos(int total_score) {
    int tdown;
    int fieldg;
    int safety;
    int td1p;
    int td2p;

    printf("Possible combinations for score %d:\n")
}