#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int i;
int *var;
for (i = 0; i < 10; i ++) 
{
if (i == 0)
var = realloc(NULL, sizeof(int));
else
var = realloc(var, sizeof(int) * (i + 1));
}
for (i = 0; i < 10; i ++)
var[i] = i;
for (i = 0; i < 10; i ++)
printf("%d\n", var[i]);
return 0;
}
