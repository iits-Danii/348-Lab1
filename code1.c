#include <stdio.h>

void find_combos(int total_score);

int main() {
    int total_score;

    //loops infinitely until break condition//
    while (1) {
        printf("Enter a score (must be a value greater than 1 or program will stop): ");
        scanf("%d", &total_score);

        //break condition
        if (total_score <= 1) {
            break;
        }
        
        find_combos(total_score);
    }
    return 0;
}

void find_combos(int total_score) {
    //initialize variables
    int tdown;
    int fieldg;
    int safety;
    int td1p;
    int td2p;

    printf("Possible combinations for score %d:\n", total_score);

    //loops through possible counts of each way of scoring
    for (td2p = 0; td2p*8 <= total_score; td2p++) {
        for (td1p = 0; td1p*7 <= total_score; td1p++) {
            for (tdown = 0; tdown*6 <= total_score; tdown++) {
                for (fieldg = 0; fieldg*3 <= total_score; fieldg++) {
                    for (safety = 0; safety*2 <= total_score; safety++) {
                        
                        //checks if current combo sums to score//
                        if (td2p*8+td1p*7+tdown*6+fieldg*3+safety*2 == total_score)
                            printf("TD+2P: %d, TD+1P: %d, TD: %d, FG: %d, Safety: %d\n", td2p, td1p, tdown, fieldg, safety);
                    }
                }
            }
        }
    }
}