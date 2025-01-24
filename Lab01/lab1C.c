/***************************************
 * Lab01 *
 * Author: Advincula, Juan-Miguel *
 * EECS/Prism username: jmiguela *
 * Yorku Student #: 220523627 *
 * Email: jmiguela@my.yorku.ca *
 ****************************************/

#include <stdio.h>
#define SIZE 10

int main() {
    int ch;
    int digitCount[SIZE] = {0};
    int count = 0;
    

    while (ch != EOF) {
        ch = getchar();     
        
        if(ch >= '0' && ch <= '9') {
            digitCount[ch - '0']++;
        } else {
            count++;
        }
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d: %d\n", i, digitCount[i]);
    }

    printf("X: %d\n", count);
    
    return 0;
}