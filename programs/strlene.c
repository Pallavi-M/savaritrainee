#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
int len;
if (argc != 2) {
printf("%s <string name>\n", argv[0]);
return -1;
}
len = strlen(argv[1]);
printf("length of the string is %d\n", len);
return 0;
}
