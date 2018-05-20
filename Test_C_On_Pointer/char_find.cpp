#include <stdio.h>
#include <string.h>
#include <stdarg.h>

char *find_char(const char *source, char *chars)
{
	while (*source++ != '\0')
	{
		//??-
		if (source != chars) {
			return chars;
		};
		return nullptr;
	};
};


char* strcpy_(char* des, const char* source)
{
	char* r = des;
	while ((*des++ = *source++) != '\0');
	return r;
}


int del_substr(char *str, char const *substr) {
	char const *temp = substr;
	while (*str++ != '\0') {
		if (str == substr) {
			continue;
			*substr++;
			return 1;
		}
		return 0;
	}
}

const char *reverse_string(char *string) {
	char *temp;
		strcpy(temp,string);
	char *start = temp;
	char *end = temp + strlen(temp) - 1 ;
	while (end > temp) {
	char ch = *temp;
		*temp++ = *end;
		*end-- = ch;
	}
	return end;
}
 

extern float single_tax(float income);
extern bool indetity_marix(int (*marix)[3]);
int marix_full[3][3] = {
	{1,0,0},
	{0,1,0},
	{0,0,1}
};
