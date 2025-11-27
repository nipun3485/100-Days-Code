#include <stdio.h>

int main() {
    long num;
    int freq[10] = {0};
    
    printf("Enter a number: ");
    scanf("%ld", &num);

    if (num < 0)
        num = -num;

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d\n", maxDigit);

    return 0;
}

