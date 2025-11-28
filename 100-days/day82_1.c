#include <stdio.h>

int main() {
    // Define enum
    enum TrafficLight { RED, YELLOW, GREEN };

    // Example: set current light here
    enum TrafficLight light;

    printf("Enter traffic light value (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &light);

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}

