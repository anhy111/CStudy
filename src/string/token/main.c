#include <stdio.h>
#include <string.h>
#include "token.h"


int main(void)
{
	char msg[] = "Hi,   there. Hello. Bye";
	const char delims[] = " ,.";
	
	char* token = str_token(msg, delims);
	while(token != NULL){
		printf("%s\n", token);
		token = str_token(NULL, delims);
	}
	
	return 0;
}
