#include <stdio.h>

// Manual string compare function
int myStrCmp(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i])
            return 0;   // not equal
        i++;
    }
    // If both ended at same time → identical
    return (a[i] == '\0' && b[i] == '\0');
}

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll No: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input for second student
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll No: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare structures manually
    if (myStrCmp(s1.name, s2.name) &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) 
    {
        printf("\nThe structures are IDENTICAL.\n");
    } 
    else {
        printf("\nThe structures are NOT identical.\n");
    }

    return 0;
}

