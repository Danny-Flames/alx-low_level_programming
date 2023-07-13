#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i] != '\0'; i++) {
        if (!isdigit(num1[i])) {
            printf("Error\n");
            return 98;
        }
    }

    for (int i = 0; num2[i] != '\0'; i++) {
        if (!isdigit(num2[i])) {
            printf("Error\n");
            return 98;
        }
    }

    unsigned long long int result = strtoull(num1, NULL, 10) * strtoull(num2, NULL, 10);
    printf("%llu\n", result);

    return 0;
}
