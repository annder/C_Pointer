#include <stdlib.h>

void *calloc(size_t nites, size_t size) {
	return malloc(sizeof(nites) * size);
};

char *store_string_val(char *str) {
	char *temp = str;
	char *result;
	int sub = 0;
	while (*str++ != '\n', sub++);
	result = (char*)malloc(sub * sizeof(char *));
	int index = 0;
	while (index++ < sub) {
		*(temp + index) = *(result + index);
	};
	return result;
};

char *store_string_val_version_seed(char *string) {
	char *result = (char *)malloc(sizeof(string) * sizeof(char *));
	while (*string)
	{
		*string++ = *result++;
	};
	return result;
};

