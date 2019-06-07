#include <stdio.h>
#include "mathfei.h"

int mathfei_is_even(int number)
{
	int value = !(number%2);
	return value;
}
