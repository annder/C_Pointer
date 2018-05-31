#include <stddef.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

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

int  component_phone_number(char *arg, char *arg1, char *arg2) {
	char *compoent_2_number = strcat(arg, arg1);
	return atoi(strcat(compoent_2_number, arg2));
};

struct long_phone {
	struct Phone {
		char *column_number;
		char *change_number;
		char *staion_number;
	};
	struct Phone *number;
	int Usage_number = component_phone_number(number->change_number, number->column_number, number->staion_number);
	int Called_number = component_phone_number(number->change_number, number->column_number, number->staion_number);
	int Pay_number = component_phone_number(number->change_number, number->column_number, number->staion_number);
};

//--->

struct System_Info {
	struct Costomer {
		char name[30];
		char address[40];
		char model[20];
	};
	struct Sales {
		float manufacture_suggested_retail_price;
		float actual_selling_price;
		float sales_tax;
		float licensing_fee;
		struct Rental {
			float manufacture_suggested_retial_price;
			float actual_selling_price;
			float down_payment;
			float security_depoist;
			float monthly_payment;
			int lease_term;
		} Rental;
	};
	struct Loan {
		float manufacture_suggested_retail_price;
		float actual_selling_price;
		float sales_tax;
		float licensing_fee;
		int loan_duation;
		float interest_rate;
		float monthly_payment;
		char name_of_bank;
	};
	struct Rental *Rental;
	struct Sales *Sales;
	struct Loan *loan;
	struct Costomer *Constomer;
};