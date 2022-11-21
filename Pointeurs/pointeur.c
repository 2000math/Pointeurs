#include <stdio.h>
#include <stdlib.h>

void permuter(int*, int*);

int main(void)
{
	int val1 = 3;
	int val2 = 45;

	permuter(&val1, &val2);

	printf("val1: %d \nval2: %d", val1, val2);

	return 0;
}

void permuter(int* val_1, int* val_2)
{
	int val_3;

	val_3 = *val_2;
	*val_2 = *val_1;
	*val_1 = val_3;


}