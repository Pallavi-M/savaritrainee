#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
char *dst;
int dst_len;
if (argc != 2) {
printf("%s <string name>\n", argv[0]);
return -1;
}
// find the length of the destination and add 1 for null terminator
dst_len = strlen(argv[1]) + 1;
dst = calloc(1, dst_len);
if (!dst) {
return -1;
}
strcpy(dst, argv[1]);
printf("Source %s Destination %s\n", argv[1], dst);
free(dst);
return 0;
}
