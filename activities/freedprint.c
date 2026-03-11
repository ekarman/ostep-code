#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    int *data = (int *)malloc(sizeof(int) * 100);
    data[100] = 0;
    free(&data[4]);
    printf("%n", &data[100]);
    return 0;
}