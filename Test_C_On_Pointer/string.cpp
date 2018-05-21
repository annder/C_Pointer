#include <stdio.h>
#include <string.h>
#include <ctype.h>
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


void count_persent_string(char *string) {
	char *val,*temp;
	scanf("%s", &val);
	strcpy(val,temp);
	int upper_case = 0,
		lowwer_case = 0,
		whithe_case = 0,
		symbol_case = 0,
		number_case = 0;
	while (*val++ != '\0' ) {
		int force_transform = (int)val;
		if (isupper(force_transform)) 
			upper_case++;
		if (islower(force_transform))
			lowwer_case++;
		if (isalnum(force_transform))
			number_case++;
		if (isblank(force_transform))
			whithe_case++;
	};
	int sumlen = strlen(temp);
	printf("blank: %f \n",  whithe_case/ sumlen);
	printf("number: %f \n", number_case / sumlen);
	printf("upper:%f \n", upper_case / sumlen);
	printf("lowwer:%f \n", lowwer_case / sumlen);
}
