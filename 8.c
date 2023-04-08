#include<stdio.h>

union data {
    int integer;
    float floating;
};

int main() {
    union data value;
    int choice;

    printf("Enter 1 for integer value or 2 for floating value: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter an integer value: ");
        scanf("%d", &value.integer);
        printf("The integer value you entered is: %d", value.integer);
    }
    else if(choice == 2) {
        printf("Enter a floating value: ");
        scanf("%f", &value.floating);
        printf("The floating value you entered is: %f", value.floating);
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}

