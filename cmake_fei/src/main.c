#include <stdio.h>
#include <mathfei/mathfei.h>
#include <hello.h>
extern int print_hello(void);
int main()
{	
	hello("hello world!");
	int value = mathfei_is_even(4);
	if (value)
		printf("%d is even number\n", 4);
	else
		printf("%d is odd number\n", 4);
	
	return 0;
}
