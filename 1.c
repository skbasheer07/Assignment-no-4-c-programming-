#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
}emp;

int main() {
    struct Employee emp;

    printf("Enter employee ID: ");
    scanf("%d", &emp.emp_id);

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee designation: ");
    scanf("%s", emp.designation);

    printf("Enter employee department: ");
    scanf("%s", emp.department);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee Details\n");
    printf("ID: %d\n", emp.emp_id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}

