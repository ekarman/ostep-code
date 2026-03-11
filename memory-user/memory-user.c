#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    time_t start = time(NULL);
    int number_of_megabytes = atoi(argv[1]);
    long long *space_waster = (long long*)malloc(1000000 * number_of_megabytes);

    if (argc != 3) {
        fprintf(stderr, "usage: memory-user [X megabytes of memory to use] [for Y seconds]\n");
        exit(1);
    }

    int i = 0;
    long long current_space = space_waster[0];
    while (time(NULL) - start < atoi(argv[2])) {
        if (i < sizeof(&space_waster)/sizeof(current_space)-1) {
            i++;
        } else {
            i = 0;
        }
        current_space = space_waster[i];
    }
}