#include <stdio.h>

#include <stdarg.h>

int add_ints(const size_t count, ...);

int main(void)
{
	int result;
	
	result = add_ints(1, 16);
	printf("result: %d\n", result);
	
	result = add_ints(4, 1, 2, 3, 4);
	printf("result: %d\n", result);
	
	return 0;
}

int add_ints(const size_t count, ...)
{
	va_list ap;
	int sum;
	size_t i;
	
	sum = 0;
	va_start(ap, count);
	{
		for( i = 0; i < count; i++) {
			sum += va_arg(ap, int);
		}
	}
	va_end(ap);
	
	return sum;
}
