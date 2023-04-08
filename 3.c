#include <stdio.h>
#include <time.h>

struct Student {
    char name[50];
    int roll_num;
    int birth_year;
    int birth_month;
    int birth_day;
    int admission_year;
    int admission_month;
    int admission_day;
};

int main() {
    struct Student stu;

    printf("Enter student details:\n");

    printf("Name: ");
    scanf("%s", stu.name);

    printf("Roll Number: ");
    scanf("%d", &stu.roll_num);

    printf("Birthday (YYYY MM DD): ");
    scanf("%d %d %d", &stu.birth_year, &stu.birth_month, &stu.birth_day);

    printf("Admission Date (YYYY MM DD): ");
    scanf("%d %d %d", &stu.admission_year, &stu.admission_month, &stu.admission_day);

    // Calculate age at time of admission
    struct tm dob = {0};
    dob.tm_year = stu.birth_year - 1900;
    dob.tm_mon = stu.birth_month - 1;
    dob.tm_mday = stu.birth_day;

    struct tm admission = {0};
    admission.tm_year = stu.admission_year - 1900;
    admission.tm_mon = stu.admission_month - 1;
    admission.tm_mday = stu.admission_day;

    time_t dob_time = mktime(&dob);
    time_t admission_time = mktime(&admission);

    double seconds = difftime(admission_time, dob_time);
    double days = seconds / (60 * 60 * 24);
    int years = (int) (days / 365.25);

    printf("\nAge at the time of admission: %d years\n", years);

    return 0;
}

