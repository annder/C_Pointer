#include <stdbool.h>;

extern int array_lenght(int array_[]);
extern void pop_array(int array_[]);
extern void push_array(int array_[], int element);

// 

void bouble_array(int array_[]) {
	int const array_len = array_lenght(array_);
	bool not_sorted = true;
	while (not_sorted) {
		for (int i = 0; i < array_len - 1; i++) {
			if (array_[i] < array_[i - 1]) {
				int temp = array_[i];
				array_[i] = array_[i - 1];
				array_[i - 1] = temp;
				not_sorted = true;
			};
		};
	};
};

void Quick_sort(int array_[]) {
	
}