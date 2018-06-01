#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

extern void *alloc(size_t size);

int main() {	
	int *p;
	p = (int*)alloc(100);
	free(p);
	char *v = (char *)alloc(25 * sizeof(int));
	free(v);
};
