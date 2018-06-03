#include <stdarg.h>

int MainSum(int n_value, ...)
{
	va_list var_arg;
	int count;
	float sum = 0;
	va_start(var_arg, n_value);
	for (count = 0; count < n_value; count += 1)
	{
		sum += va_arg(var_arg, int);
	}
	va_end(var_arg);
	return sum / n_value;
}

int find_max(int array_[])
{
	int max = array_[0];
	for (int i = 0; i < 3; i++)
	{
		if (array_[i] > max)
		{
			max = array_[i];
		}
	}
	return max;
}
void array_copy(int arg[], int arg_cpy[])
{
	register int *p = arg;
	register int *q = arg_cpy;
	for (int i = 0; i < 3; i++)
	{
		*(p + i) = *(p + i);
	}
}
int Marix[2][2] = {{1, 2}, {3, 4}};
int (*Functional)[2] = Marix;
int F = *(*(Functional + 1) + 1);

//char char_value[2][5][3][4] = {
//	{ { { { ' ' },{},{},{} },{ {},{},{},{} },{ {},{},{},{ 'x' } } },
//	{ { {},{},{},{} },{ {},{},{ 'A' },{} },{ {},{},{},{} } },
//	{ { {},{ 0xf3 },{},{} },{ {},{},{},{} },{ {},{},{},{} } },
//	{ { {},{},{},{} },{ {},{},{ '\n' },{} },{ {},{},{},{} } },
//	{ { {},{},{},{} },{ {},{},{},{} },{ {},{},{},{} } } },
//	// ---> 2
//	{ { { {},{ 0302 },{},{} },{ {},{},{},{} },{ {},{},{},{} } },
//	{ { {},{ '\'' },{},{} },{ {},{},{},{} },{ { '\l21' },{},{},{} } },
//	{ { { '0' },{},{},{} },{ {},{},{},{} },{ {},{},{},{} } },
//	{ { {},{},{},{} },{ {},{},{},{} },{ {},{ '3' },{ 3 },{} } },
//	{ { {},{},{},{} },{ {},{},{},{} },{ {},{},{},{ 125 } } } }
//};

float single_tax(float income)
{
	if (income > 23350 && income < 56550)
	{
		return 3502.50 * (28 / 100);
	}
	if (income > 56550 && income < 117959)
	{
		return 12798.5 * (31 / 100);
	}
	if (income > 117950 && income < 256500)
	{
		return 31832.5 * (36 / 100);
	}
	return 15 / 100;
};

bool indetity_marix(int (*marix)[10])
{
	int index = 0;
	while (index++ < 0)
	{
		if (*(*(marix + index) + index) != 1)
		{
			return false;
		}
	}
	return true;
}

bool extra_indetity_marix(int (*marx)[10], int len)
{
	int index = 0;
	while (index < len)
	{
		if (*(*marx + index) + index != 1)
		{
			return false;
		}
	}
	return true;
}

void marix_mutiply(int (*m1)[], int (*m2)[], int (*r)[], int x, int y, int z){};