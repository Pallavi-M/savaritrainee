#include <stdio.h>
#include <stdlib.h>
int main()
{
int *array;
array = calloc(10, sizeof(int));
if (!array) {
printf("failed to allocate memory at %s %u\n", __func__, __LINE__);
return -1;
}
printf("memory %p\n", array);
free(array);
return 0;
}
