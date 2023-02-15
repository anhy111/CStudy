#include <stdio.h>

int get_length(const char* str){
	
	char* ptr = str;
	while(*ptr != '\0'){
		ptr++;
	}
	
	return ptr - str;
}

int main(void)
{
	int length;
	char str[] = "POCU";
	length = get_length(str);
	
	printf("POCU length: %d", length);
	
	return 0;
}
