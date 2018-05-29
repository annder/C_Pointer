#include <stdio.h>
#include <string.h>

char  message[17] = "Original message";
char *other = "A differenet message";

extern char str_chr(char *string, char char_find);

struct A {
	 int a = 2;
	 int b = 2;
} x = {1,2};

typedef  struct Mystruct {
	
	int cunt ;
} MyStruct;

int main() {
	MyStruct ft = { 1 };
	MyStruct *q = &ft;
	printf	("%d\n",x.a);
	struct  A c;
	printf("%d\n", c.a);
	char *op = "HELLO";
	char getValue = str_chr(op, 'H');
	printf("%c\n", getValue);
	printf("%s\n", message);
}