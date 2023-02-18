#include <stdio.h>

#include "string_utils.h"

int main(void)
{
	int diff;
	
	diff = string_case_insensitive_compare1("hello", "HELL");
	printf("my hello to HELL: %d\n", diff);
	
	diff = string_case_insensitive_compare1("hello","yellow");
	printf("my hello to yellow: %d\n", diff);
	
	diff = string_case_insensitive_compare1("hello","HELLO");
	printf("my hello to HELLO: %d\n", diff);
	
	printf("\n");
	
	diff = string_case_insensitive_compare2("hello", "HELL");
	printf("pope hello to HELL: %d\n", diff);
	
	diff = string_case_insensitive_compare2("hello","yellow");
	printf("pope hello to yellow: %d\n", diff);
	
	diff = string_case_insensitive_compare2("hello","HELLO");
	printf("pope hello to HELLO: %d\n", diff);
	
	return 0;
}
