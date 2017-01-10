#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
char string1[100];
if (argc != 3) {
fprintf(stderr, "%s <string1> <string2>\n", argv[0]);
return -1;
}
strcpy(string1, argv[1]);
strcat(string1, argv[2]);
printf("Source1 %s Source2 %s Destination %s\n", argv[1], argv[2], string1);
return 0;
}
