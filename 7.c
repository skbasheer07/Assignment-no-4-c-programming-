#include<stdio.h>
#include<string.h>

struct student {
    int roll_no;
    char stud_name[20];
    float mark1, mark2, mark3, total_marks, average_marks;
};

int main() {
    int n, i, j;
    struct student s[100], temp;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    // Taking inputs for each student record
    for(i = 0; i < n; i++) {
        printf("\nEnter the details of student %d: ", i+1);
        printf("\nEnter Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Name: ");
        scanf("%s", s[i].stud_name);
        printf("Enter Mark1: ");
        scanf("%f", &s[i].mark1);
        printf("Enter Mark2: ");
        scanf("%f", &s[i].mark2);
        printf("Enter Mark3: ");
        scanf("%f", &s[i].mark3);
        
        //Calculating total marks and average marks
        s[i].total_marks = s[i].mark1 + s[i].mark2 + s[i].mark3;
        s[i].average_marks = s[i].total_marks/3;
    }
    
    //Sorting the student records in descending order of total marks
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(s[i].total_marks < s[j].total_marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    
    //Displaying the sorted records
    printf("\n\nStudent Details in Descending Order of Total Marks:\n\n");
    printf("Roll No\tName\tMark1\tMark2\tMark3\tTotal Marks\tAverage Marks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t\t%.2f\n", s[i].roll_no, s[i].stud_name, s[i].mark1, s[i].mark2, s[i].mark3, s[i].total_marks, s[i].average_marks);
    }
    
    return 0;
}

