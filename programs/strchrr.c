#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
int ret;
char *string, ch, *string_pos;
if (argc != 3) {
fprintf(stderr, "%s <string> <character>\n", argv[0]);
return -1;
}
string = argv[1];
ch = argv[2][0];
string_pos = strchr(string, ch);
if (string_pos) {
fprintf(stderr, "character pos found %p and string %s\n", string_pos, string_pos);
} else {
fprintf(stderr, "character pos not found\n");
}
return 0;
}
