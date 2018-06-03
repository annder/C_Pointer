extern void pop_array(int array_[]);
extern void push_array(int array_[], int element);

int  *bouble_array(int array_[]) {
	int const array_len = sizeof(array_) / sizeof(int);
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
	return array_;
};