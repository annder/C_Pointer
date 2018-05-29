#include <stdio.h>
#include <stddef.h>
#define MAX 1


typedef struct Reduce_memory {
	int *pointer_other;
	union Share_memory {
		char *io;
	} Share_memory;
} Reduce_memory;

typedef struct PARTINFO {
	int coat;
	int suppiler;
} PARTIONFO;

typedef struct SUBASSYINFO {
	int n_parts;
	typedef struct {
		char partno[10];
		int quan;
		enum { PART,SUBASSBY } type; 
	} parts[MAX];
} SUBASSYINFO;

typedef struct INVREC {
	char parton[10];
	int quan;
 	typedef union {
		PARTINFO part;
		SUBASSYINFO subassy;
	} info;
} INVREC;

int main() {
	Reduce_memory Fun;
	char *yet =  Fun.Share_memory.io = "Drink_coffer";
	printf("%s", yet);
};

