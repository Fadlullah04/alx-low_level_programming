#include"main.h"

void *malloc_checked(unsigned int b)
{
    if (b == 0) {
        fprintf(stderr, "Error: Invalid allocation size.\n");
        return NULL;
    }

    void *p = malloc(sizeof(unsigned int) * b);
    if (p == NULL) {
        fprintf(stderr, "Error: Failed to allocate memory.\n");
        exit(98);
    }

    return p;
}
