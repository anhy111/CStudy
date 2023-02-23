#include <stdio.h>

void cat_str(char* dest, const char* src)
{
	while(*dest != '\0'){
		dest++;
	}
	
	while(*src != '\0'){
		*dest++ = *src++;
	}
	
	*dest = '\0';
}

void ncat_str(char* dest, const char* src, int count)
{
	while(*dest != '\0'){
		dest++;
	}
	
	while(count != 0){
		*dest++ = *src++;
		count--;
	}
	
	*dest = '\0';
}

int main(void)
{
	const char* src = "POCU";
	char dest[11] = "Hello ";
	char dest2[11] = "Hello ";
	
	cat_str(dest,src);
	printf("%s \n",dest);
	
	ncat_str(dest2, src, 3);
	printf("%s \n",dest2);
	return 0;
}
