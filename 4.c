#include <stdio.h>

struct Customer {
    int account_no;
    char name[50];
    float balance;
};

void print_low_balance_customers(struct Customer customers[], int n) {
    int i;

    printf("\nCustomers with balance less than 100:\n");

    for(i = 0; i < n; i++) {
        if(customers[i].balance < 100.0) {
            printf("Account Number: %d\n", customers[i].account_no);
            printf("Name: %s\n", customers[i].name);
        }
    }
}

int main() {
    struct Customer customers[3];
    int i;

    printf("Enter customer details:\n");

    for(i = 0; i < 3; i++) {
        printf("\nEnter details of customer %d:\n", i+1);

        printf("Account Number: ");
        scanf("%d", &customers[i].account_no);

        printf("Name: ");
        scanf("%s", customers[i].name);

        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    print_low_balance_customers(customers, 3);

    return 0;
}

