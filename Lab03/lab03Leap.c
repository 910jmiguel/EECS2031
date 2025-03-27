
#include <stdio.h>

int isLeap(int year);
int countDays(int month, int day, int isLeap);

int main() {
    int year, month, day;

    while(year > 0) {
        printf("Enter date ('YYYY MM DD'): ");
        scanf("%4d %d %d", &year, &month, &day);
        int leap = isLeap(year);
        int daysCount = countDays(month, day, leap);
        printf("%d days of year %4d have elapsed ", daysCount, year);
        if(leap) {
            printf("[leap year]");
        }
        printf("\n");
    }
}

int isLeap(int year) {
    if(year % 400 == 0) {
        return 1;
    } else if(year % 100 == 0) {
        return 0;
    } else if (year % 4 == 0){
        return 1;
    } else {
        return 0;
    }
}

int countDays(int month, int day, int isLeap) {
    int daysCount = day;
    for(int i = 1; i < month; i++) {
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            daysCount += 31;
        }
        if(i == 4 || i == 6 || i == 9 || i == 10) {
            daysCount += 30;
        }
        if(i == 2) {
            if(isLeap) {
                daysCount += 29;
            } else {
                daysCount += 28;
            }
        }
    }
    return daysCount;
}