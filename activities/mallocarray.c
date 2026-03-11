#include <stddef.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int *data = (int *)malloc(sizeof(int) * 100);
    data[100] = 0;
    return 0;
}