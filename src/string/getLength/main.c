#include <stdio.h>

get_string_length(const char* str)
{
	size_t count = 0;
	const char* ptr = str;
	while(*ptr++ != '\0'){
		++count;
	}
	
	return count;
	
}

int main(void)
{
	char str[] = "POCU";
	int length = 0;
	length = get_string_length(str);
	
	printf("POCU length: %d\n",length);
	
	return 0;
}
