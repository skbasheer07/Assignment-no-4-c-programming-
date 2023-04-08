#include <stdio.h>
#include <string.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student s;
    printf("Enter the student's name: ");
    scanf("%s", s.name);
    printf("Enter the student's GPA: ");
    scanf("%f", &s.gpa);
    printf("Student's name: %s\n", s.name);
    printf("Student's GPA: %.2f\n", s.gpa);
    return 0;
}

