#include <stdio.h>
#include <string.h>

char  message[17] = "Original message";
char *other = "A differenet message";

extern char str_chr(char *string, char char_find);


int main() {
	char *op = "HELLO";
	char getValue = str_chr(op, 'H');
	printf("%c\n", getValue);
	printf("%s\n", message);
}