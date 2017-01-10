#include <stdio.h>

char dest[100];
int len;

   int copy_strings(int argc, char **argv)
   {
// fail if we do not have enough arguments
if (argc != 1) {
return -1
}
strcpy(dest, argv[0]);
printf("copied to dest: %s\n", dest);
return 0;
}
int len_strings(int argc, char **argv)
{
if (argc != 1) {
return -1;
}
len = strlen(argv[0]);
printf("length of the string: %d\n", len);
return 0;
}
static struct cmd_args {
char *arg_name;
int (*func)(int argc, char **argv);
} arg_list[] = {
{"copy", copy_strings},
{"len", len_strings},
};
int main(int argc, char **argv)
{
int ret;
int i;
for (i = 0; i < sizeof(arg_list) / sizeof(arg_list[0]); i++) {
if (!strcmp(argv[1], arg_list[i].arg_name)) {
arg_list[i].func(argc - 2, &argv[i + 2]);
}
}
return 0;
}
