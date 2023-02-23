#include <stdio.h>
#include <string.h>


char* search_str(const char* str, const char* substr)
{

	while(*str != '\0'){
		if(*str == *substr){
			const char* p = str;
			const char* sp = substr;
			
			while(*p == *sp){
				p++;
				sp++;
			}
			
			if(*sp == '\0'){
				return (char*)str;
			}
		}
		str++;
	}
	
	return NULL;
}

int main(void)
{
	char msg[] = "I love string! I love C! I love programming!";
	
	char* result = search_str(msg, "string");
	printf("result: %s\n", result == NULL ? "(null)" : result);
	
	return 0;
}
