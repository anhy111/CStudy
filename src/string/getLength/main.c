#include <stdio.h>

int get_length(const char* str){
	
	size_t count = 0;
	const char* ptr = str;
	
	while(*ptr++ != '\0'){
		++count;
	}
	
	return count;
}

int main(void)
{
	int length;
	char str[] = "POCU";
	length = get_length(str);
	
	printf("POCU length: %d", length);
	
	return 0;
}
