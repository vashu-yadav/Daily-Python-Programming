#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    int roll;
    struct Date dob;
};

int main() {
    struct Student s;

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("Roll: %d\n", s.roll);
    printf("DOB: %d-%d-%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
