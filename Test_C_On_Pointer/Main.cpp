#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

extern void *alloc(size_t size);
extern int compare_integers(void const *a, void const *b);
extern int menory_main();

int main()
{
	int a;
	printf("%d", scanf("%d", &a));
};
