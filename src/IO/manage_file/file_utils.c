#define _CRT_SECURE_NO_WARNINGS

#include "file_utils.h"

#define LENGTH (256)


int read_file(char* filename)
{
	FILE* stream;
	char buffer[LENGTH];
	stream = fopen(filename, "r");
	
	if (stream == NULL) {
		perror("error while opening: ");
		return 0;
	}
	
	while (fgets(buffer, LENGTH, stream) != NULL) {
		printf("%s", buffer);
	}
	printf("\n");
	if (fclose(stream) != 0) {
		perror("error while closing");
		return 0;
	}
	
	return 1;
}

int write_file(char* filename)
{
	FILE* stream;
	char buffer[LENGTH];
	int length;
	stream = fopen(filename, "w");
	
	if (stream == NULL) {
		perror("error while opening: ");
		return 0;
	}
	
	printf("enter yout text\n");
	
	while (fgets(buffer, LENGTH, stdin) != NULL) {
		length = strlen(buffer);
		fwrite(buffer, sizeof(char), length, stream);
	}
	fflush(stream);
	
	
	if (fclose(stream) != 0) {
		perror("error while closing");
		return 0;
	}
	
	return 1;
}

int append_file(char* filename)
{
	FILE* stream;
	char buffer[LENGTH];
	int length;
	
	if(read_file(filename) == 0){
		return 0;
	}
	
	stream = fopen(filename, "a");
	
	while (fgets(buffer, LENGTH, stdin) != NULL) {
		length = strlen(buffer);
		fwrite(buffer, sizeof(char), length, stream);
	}
	fflush(stream);
	
	if (fclose(stream) != 0) {
		perror("error while closing");
		return 0;
	}
	
	return 1;
}

int remove_file(char* filename)
{
	if(remove(filename) != 0){
		return 0;
	}
	return 1;
}


