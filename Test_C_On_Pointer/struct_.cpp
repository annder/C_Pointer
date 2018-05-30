#include <stddef.h>
#include <stdio.h>
#define MAX 1

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



typedef struct PARTINFO {
	int coat;
	int suppiler;
} PARTIONFO;

typedef struct SUBASSYINFO {
	int n_parts;
	typedef struct {
		char partno[10];
		int quan;
		enum { PART, SUBASSBY } type;
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

union func {
	int a;
} x = {1};

struct x {
	int a;
	char b[10];
	float c;
} xf = {
	1,
	"hello",
	0
};

//Think

struct CREACT {
	int a;
	float b;
} qf[2] = { { 2,12 },{ 2,3 } };

struct {
	int  a : 2;
} unFill = {1};
// Opreate follow:a += 1;
