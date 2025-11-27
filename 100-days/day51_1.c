#include <stdio.h>

int main() {
    int n, target;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter %d sorted elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    int first = -1, last = -1;
    
    // Find first and last occurrence
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;       // first occurrence
            }
            last = i;            // last occurrence keeps updating
        }
    }
    
    // Print results
    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);

    return 0;
}

