#include <stdio.h>

int main()
{
    int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int date, mon, year, i;
    long int s = 0;
    printf("Enter the valid date (dd mm yyyy): ");
    scanf("%d %d %d", &date, &mon, &year);
    int yearsPassed = year - 2000;
    s = yearsPassed * 365 + (yearsPassed / 4);
    for(i = 0; i < mon - 1; i++)
        s += monthDays[i];
        s += date;
        if((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && mon <= 2)
        s -= 1;
        int dayIndex = s % 7;
        char *weeks[7] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
        printf("\nThe day at date is : %s\n", weeks[dayIndex]);
        return 0;
        }
