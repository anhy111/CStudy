#include "string_utils.h"

#define TRUE (1)
#define FALSE (0)

int is_alpha(int c)
{
	return ('a' <= c && c <= 'z')
			|| ('A' <= c && c <= 'Z');
}

int to_upper(int c)
{
	if(is_alpha(c)){
		return c & ~0x20;
	}
	return c;
}

int to_lower(int c)
{
	if(is_alpha(c)){
		return c | 0x20;
	}
	return c;
}

void string_toupper(char* str)
{
	while(*str != '\0'){
		*str = to_upper(*str);
		str++;
	}
}

void string_tolower(char* str)
{
	while(*str != '\0'){
		*str = to_lower(*str);
		str++;
	}
}

