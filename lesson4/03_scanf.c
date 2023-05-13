#include <stdio.h>
#include <stdlib.h>

int main() {
    int date, month, year;
    char name[20];

    printf("Enter your DOB (dd mm yyyy):\n");

    scanf("%s %d %d %d", name, &date, &month, &year); // interprets the inputs in the specified format

    printf("Hello %s, Your date of birth is %02d/%02d/%d.\n", name, date, month, year);
    return 0;
}