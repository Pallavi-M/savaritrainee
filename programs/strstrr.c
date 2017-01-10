#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])//commandline args
{
int ret;
char *main_str, *sub_str, *match;
if (argc != 3) {
fprintf(stderr, "%s <main string> <sub string>\n", argv[0]);
return 0;
}
main_str = argv[1];
sub_str = argv[2];
match = strstr(main_str, sub_str);
printf("match found %s\n", match ? "Yes": "No");
if (match) {
printf("matching address %p string %s\n", match, match);
}
return 0;
}
