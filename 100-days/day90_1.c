#include <stdio.h>

int main() {
    // Define enum for gender
    enum Gender { MALE = 1, FEMALE, OTHER };

    // Define struct containing the enum
    struct Person {
        char name[50];
        enum Gender gender;
    };

    struct Person p;

    // Take user input
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender (1=MALE, 2=FEMALE, 3=OTHER): ");
    scanf("%d", &p.gender);

    // Print Person Information
    printf("\nName: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Invalid Gender\n");
    }

    return 0;
}

