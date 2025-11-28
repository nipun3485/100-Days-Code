#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    // Input employee data
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Write to binary file
    fp = fopen("employees.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(e, sizeof(struct Employee), n, fp);
    fclose(fp);

    printf("\nData successfully written to employees.bin\n");

    // Read from binary file
    fp = fopen("employees.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    struct Employee temp;

    printf("\n--- Employee Records from File ---\n");

    while (fread(&temp, sizeof(struct Employee), 1, fp) == 1) {
        printf("\nName   : %s\n", temp.name);
        printf("ID     : %d\n", temp.id);
        printf("Salary : %.2f\n", temp.salary);
    }

    fclose(fp);

    return 0;
}

