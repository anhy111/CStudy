#include <stdio.h>

int compare_string1(const char* str1, const char* str2)
{
	while(*str1 != '\0' && *str1 == *str2){
		++str1;
		++str2;
	}
	return *str1 - *str2;
}

int compare_string2(const char* str1, const char* str2)
{
	while(*str1 != '\0' && *str1 == *str2){
		++str1;
		++str2;
	}
	
	if(*str1 == *str2){
		return 0;
	}
	
	return *str1 > *str2 ? 1 : -1;
}

int main(void)
{
	int result;
	char str1[] = "ABCD";
	char str2[] = "ABCE";
	
	result = compare_string(str1, str2);
	
	printf("%s compare %s : %d\n",str1,str2,result);
	
	return 0;
}
