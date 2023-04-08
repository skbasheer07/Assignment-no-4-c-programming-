#include <stdio.h>

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i, max_index;
    float max_salary = -1.0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i+1);

        printf("Employee Number: ");
        scanf("%d", &employees[i].eno);

        printf("Name: ");
        scanf("%s", employees[i].ename);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        if(employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
            max_index = i;
        }
    }

    printf("\nDetails of employee with highest salary:\n");
    printf("Employee Number: %d\n", employees[max_index].eno);
    printf("Name: %s\n", employees[max_index].ename);
    printf("Salary: %.2f\n", employees[max_index].salary);

    return 0;
}

