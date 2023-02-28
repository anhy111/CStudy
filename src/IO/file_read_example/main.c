#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define LENGTH (30)
#define TRUE (1)
#define FALSE (0)

FILE* open_file(const char* filename, const char* mode)
{
	FILE* stream = fopen(filename, mode);
	if (!stream) {
		perror("error while opening");
		return NULL;
	}
	return stream;
}

void read_file(const char* filename)
{
	FILE* stream = NULL;
	char data[LENGTH];
	
	stream = open_file(filename, "rb");
	
	while (TRUE) {
		if (fgets(data, LENGTH, stream) == NULL) {
			clearerr(stdin);
			break;
		}
		printf("%s\n", data);
	}
	
	if (fclose(stream) != 0) {
		fprintf(stderr, "error while closing");
	}
}



int main(void)
{
	read_file("hello.txt");
	return 0;
}
