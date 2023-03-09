#include <stdio.h>

typedef struct {
	short age;
	char sex;
} sex_t;

int add(const int a, const int b)
{
	return a + b;
}

int main(void)
{
	sex_t sex;
	int (*plus)(const int, const int) = add;
	
	printf("%llu", sizeof(sex));
	printf("function pointer size : %llu", sizeof(plus));
	
	return 0;
}
