#include <stdio.h>
#include <stddef.h>



union  {
	int a;
	char b;
	float c;
} sharp;

int main() {	
	sharp.a = 1;
	sharp.b = 'x';
	sharp.c = 2;
	printf("a:%d , b:%c, c:%f\n", sharp.a, sharp.b, sharp.c);
};

