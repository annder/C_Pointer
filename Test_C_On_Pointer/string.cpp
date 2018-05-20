char str_chr(char *string,char char_find) {
	char *temp = string;
	while (*string++ == char_find)
	{
		return char_find;
	}
	return '0';
}

char *strpbrk(char const *str,char const *group) {
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


char *my_strrstr(char ) {

}
