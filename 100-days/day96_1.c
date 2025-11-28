#include <stdio.h>

// Nested structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure containing Date
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joiningDate.day,
                     &emp.joiningDate.month,
                     &emp.joiningDate.year);

    // Output employee details
    printf("\n--- Employee Details ---\n");
    printf("Name         : %s\n", emp.name);
    printf("ID           : %d\n", emp.id);
    printf("Salary       : %.2f\n", emp.salary);
    printf("Joining Date : %02d-%02d-%04d\n",
            emp.joiningDate.day,
            emp.joiningDate.month,
            emp.joiningDate.year);

    return 0;
}

