#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


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

int my_lenght(char *string) {
	//if string_ is '\0' or not end of.
	char *temp;
	int index = 0;
	strcpy(string, temp);
	while (*string++ != '\0')
	{
		index++;
	}
	my_lenght(string);
	return index;
};

const char *my_strcpy(char *string,const char *source) {
	char *temp = string;
	int string_size = sizeof(string);
	int source_size = sizeof(source);
	if (string_size > source_size) {
		source = new char[string_size];
	};
	const char *source_temp = source;
	while ((*string++ = *source++) != '\0');
	return source_temp;
};


char *my_strcat(char *str1,const char *str2) {
	char *pster = str1;
	while (pster++ != '\0');
	--pster;
	while (*pster++ = *str2++ != '\0');
	return str1;
};


char *my_strncat(char *string,const char *cat,int n) {
	int cat_size =  sizeof(cat);
	int index = 0;
	if (n > cat_size) {
		printf("%s", "请输入一个有效的长度");
	}
	else {
	   char *temp_string = string;
		while (*string++ != '\0');
		++string;
		while (index++ < n) {
			*string++ = *cat++;
		};
		return temp_string;
	};
};

char *str_cpy_str(char *str,char *src) {
	const char *temp = str;
	while ((*str++ = *src++) != '\0');
	char *end_src = src--;
	// char *end_src = src + strlen(str) - 1;
	return end_src;
};

// Bug
char *my_str_chr(char *str,int value) {
	int str_len = strlen (str);
	char const *temp = str;
	/*
		0 -> strlen(value) -1
		1 -> strlen(value) - (value - 1)	
	*/
	int loop_number = strlen(temp) - value + 1;
	int index = 0;
	char *result;
	while (index++ != loop_number){
		result =  str++;
	};
	return result;
};


// which ---> 
char *my_str_n_chr(char *str, int ch, int which) {
	if (which == 1){ 
		return my_str_chr(str, ch);
	}
	int str_len = strlen(str);
	char const *temp = str;
	int loop_number = strlen(temp) - ch + 1;
	int index = 0;
	char *result;
	for (index; index > strlen(str); index++) {
		str++;
		if (index == ch) {
 			result = my_str_n_chr(str, ch, which);
		};
	};
	return result;
};

// In the first function rearching chars char symbols

// and match included about str arguments, Then return counts.

int count_chars(char const *str,char const *chars) {
	char const  *temp = str;
	int index = 0;
	while (*str++ != '\0') {
		if (str == chars) {
			index++;
		}
	}
	return index;
}

int palindrome(char *string) {
	int lenght = strlen(string);
	int index_string = 0;
	char *temp = string;
	if (lenght % 2 == 0) {
		return 0;
	};
	int mid_char_position = int()(lenght / 2);
	int string_sub = lenght - 1;
	int result = 0;
	for (index_string, lenght; index_string > mid_char_position, string_sub < mid_char_position; index_string++,string_sub--) {
		if (*(string + index_string) == *(string + string_sub)) {
			result++;
		};
	};
	return result == mid_char_position ? 1 : 0;
};

void scan_words(char *string) {
	int lenght_string = strlen(string);
	if (lenght_string > 100){
		printf("The string lenght over  100 chars.\n");
		printf("rewrite your entry value!");
	};
	char *getString;
	scanf("%s", getString);
	char *T_String = getString;
	char *compare_String = "the";
	int control_string_len = 0;
	while (*getString++ != '\0', control_string_len  < lenght_string) {
		if (control_string_len % 3 == 0 ){
			
		}
	};
};