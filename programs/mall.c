#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
int *var;
var = calloc(1, sizeof(int));
if (!var) 
{
printf("failed to allocate at %s %u\n", __func__, __LINE__);
return -1;
}
struct mallinfo inf;
inf = mallinfo();
printf("total non mapped %d\n", inf.arena);
printf("ordinary blocks %d\n", inf.ordblks);
printf("fastbin blocks %d\n", inf.smblks);
printf("no of mapped regions %d\n", inf.hblks);
printf("bytes in mapped region %d\n", inf.hblkhd);
printf("maximum total allocated space %d\n", inf.usmblks);
printf("free bytes held in fastbins %d\n", inf.fsmblks);
printf("total allocated space %d\n", inf.uordblks);
printf("total free space %d\n", inf.fordblks);
printf("topmost releasable blocks %d\n", inf.keepcost);
return 0;
}
