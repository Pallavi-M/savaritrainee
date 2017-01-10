#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <mcheck.h>
int main(void)
{
    int i;
    char *ptr;

    mtrace();
    for (i = 0; i < 100; i ++) {
        ptr = malloc(sizeof(char));
        if (!ptr) {
            printf("failed to allocate at %s %u\n", __func__, __LINE__);
            return -1;
        }
    //
        free(ptr);
    }

    return 0;
}
