#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Take student details
    printf("\nEnter student details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Write to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    printf("\nData successfully written to students.txt\n");

    // Read from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    printf("\n--- Student Records from File ---\n");

    struct Student temp;
    while (fscanf(fp, "%s %d %f", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n",
               temp.name, temp.roll, temp.marks);
    }

    fclose(fp);

    return 0;
}

