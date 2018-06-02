#include <stdlib.h>

int array_lenght(int const array_[]) {
	return sizeof(array_) / sizeof(int);
};

void pop_array(int array_[]) {
	int length = array_lenght(array_);
	array_ = (int *)malloc(sizeof(array_) - sizeof(int));
};

void push_array(int array_[], int element) {
	int lenght = array_lenght(array_);
	int array_meony_size = sizeof(array_);
	int number_size = sizeof(element);
	array_ =  (int*)malloc(array_meony_size  + array_meony_size);
	int i = 0;
	while (i++ < lenght + 1);
	array_[i] = element;
};

void cat_array(int array_[],int other_array[]) {

};