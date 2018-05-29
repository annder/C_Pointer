#include <stddef.h>
#include <stdio.h>

typedef struct P{
	int a = 1;
	typedef struct {
		int c = 1;
	} Func;
} Q,array_[20];

typedef struct F {
	int a = 1;
	F *name;
} F;

typedef struct A {
	int a = 2;
	int b = 2;
} A;

typedef struct print_string {
	char *string_ = "Hello World";
} print_string;

void print_val(print_string const *io) {
	printf("%s",io->string_);
}

int struct_len_element_a = offsetof(A, b);

struct Bit_Val {
	unsigned int A : 4;
};

union Cret {
	float Pi;
} Cret;

typedef struct Reduce_memory {
	int *pointer_other;
	union Share_memory {
		char *io;
	} Share_memory;
} Reduce_memory;

Reduce_memory Fun;
char *yet = Fun.Share_memory.io = "Drink_coffer";
