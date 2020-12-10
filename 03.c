#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>

bool checkNumber(char *argv) {
    while (*(argv)) {
        if (isdigit(*(argv)) == 0) return false;
        ++argv;
    }
    return true;
}

int main(int argc, char **argv) {
    for (int i = 0; i < argc; ++i) {
        if (!checkNumber(*(argv[i]))) {
            printf("-1\n");
            continue;
        }
        long int convert = strtol(argv[i], NULL, 10);

        if (convert == (int8_t)convert) {
            printf("1\n");
        } else if (convert == (int16_t)convert) {
            printf("2\n");
        } else if (convert == (int16_t)convert) {
            printf("4\n");
        }
    }
}
