#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char **argv) {
    unsigned int begin, end, result;
    if (argc < 3) {
        printf("Please specify begin and end.\n");
        return -1;
    }
    srand((unsigned int)time(NULL));
    begin = atoi(argv[1]);
    end = atoi(argv[2]);
    if ((begin == 0 && strcmp(argv[1], "0") != 0) || (end == 0) || (begin > end)) {
        printf("Invalid input.\n");
        return -2;
    }
    result = (rand() % (end - begin + 1)) + begin;
    printf("%u\n", result);
    return 0;
}
