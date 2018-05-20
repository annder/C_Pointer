#include <string.h>
char str_chr(char *string,char char_find) {
	char *temp = string;
	while (*string++ == char_find)
	{
		return char_find;
	}
	return '0';
}

char *strpbrk_(char const *str,char const *group) {
	const char *string = str, *group_ = group;
	for (string; *str != '\0'; *str++) {
		for (group_; *group != '\0'; *group++) {
			if (*string == * group_) {
				return (char *)string;
			}
		}
	}
	return nullptr;
};


//Unconfirm 
const char *my_strrstr(char const *stringA,char const *stringB ) {
	register const char *last;
	register const char *current; 
	last = nullptr;
	if (*stringB != '\0') {
		current = strstr(stringA, stringB);
		while (current != NULL) {
			last = current;
			current = strstr(last + 1, stringB);
		};
	};
	return last;
};


