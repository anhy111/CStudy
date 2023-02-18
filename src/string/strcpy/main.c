#include <stdio.h>

void copy_string(char* dest, const char* src)
{
	while(*src != '\0'){
		*dest++ = *src++;
	}
	
	*dest = '\0';
}

int main(void)
{
	char* str1 = "Pope";
	char str2[5];
	
	copy_string(str2, str1);
	
	printf("src: %s\n",str1);
	printf("dest: %s\n",str2);
	
	return 0;
}
