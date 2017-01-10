#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
int ret;
char *string1, *string2;
if (argc != 3) {
fprintf(stderr, "%s <string1> <string2>\n", argv[0]);
return -1;
}
string1 = argv[1];
string2 = argv[2];
ret = strcmp(string1, string2);
printf("strings are %s\n", (ret == 0) ? "Equal" : "Not Equal");
return 0;
}
