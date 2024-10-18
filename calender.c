#include <stdio.h>

int get_day_of_week(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    return (day + (13 * (month + 1)) / 5 + year + (year / 4) - (year / 100) + (year / 400)) % 7;
}

void print_calendar(int month, int year) {

    int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[2] = 29;
    }

 
    printf("Calendar for %d/%d\n", month, year);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

 
    int day_of_week = get_day_of_week(1, month, year);

 
    for (int i = 0; i < day_of_week; i++) {
        printf("    ");
    }

  
    for (int day = 1; day <= days_in_month[month]; day++) {
        printf("%3d ", day);
        if ((day + day_of_week) % 7 == 0) {
            printf("\n"); 
        }
    }
    printf("\n");
}

int main() {
    int month, year;


    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year (e.g., 2023): ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Invalid month! Please enter a month between 1 and 12.\n");
        return 1;
    }

    print_calendar(month, year);
    return 0;
}
