#include "string_utils.h"


/* my compare */
int string_case_insensitive_compare1(const char* str1, const char* str2)
{
	while (*str1 != '\0' && 
			(*str1 > 'Z' ? *str1-32 : *str1 ) == (*str2 > 'Z' ? *str2-32 : *str2 ) ){
		++str1;
		++str2;
	}
	
	return *str1 - *str2;
}

/* pope compare */
int string_case_insensitive_compare2(const char* str1, const char* str2)
{
	int c1;
	int c2;
	
	c1 = tolower(*str1);
	c2 = tolower(*str2);
	
	while (c1 != '\0' && c1 == c2 ){
		c1 = tolower(*++str1);
		c2 = tolower(*++str2);
	}
	return c1 - c2;
	/*
	if(c1 == c2){
		return 0;
	}
	
	return c1 > c2 ? 1 : -1;
	*/
}

char tolower(const char ch)
{
	if(ch == '\0'){
		return ch;
	}
	return ch < 'a' ? ch+32 : ch;
}
