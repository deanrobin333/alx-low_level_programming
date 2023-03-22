#include <stdio.h>

int main() {
    int i;
    unsigned long first = 1, second = 2, next;

    for (i = 0; i < 50; i++) {
        if (i <= 1) {
            next = i + 1;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lu, ", next);
    }
	printf("\n");

    return 0;
}

