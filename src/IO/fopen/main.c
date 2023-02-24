#include <stdio.h>

#define LENGTH (1024)

int main(void)
{
	FILE* stream;
	char list[LENGTH];
	
	stream = fopen("hello.txt", "r");
	
	if (fgets(list, LENGTH, stream) != NULL) {
		printf("%s", list);
	}
	
	return 0;
}
