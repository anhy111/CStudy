#include "file_utils.h"
#include <stdio.h>
#include <string.h>

#define CMD_LENGTH (256)
#define TRUE (1)
#define FALSE (0)

void make_token(char* cmd, char** token)
{
	*token++ = strtok(cmd, " \n");
	while (*token != NULL) {
		*token++ = strtok(NULL, " \n");
	}
	*token = NULL;
}

int main(void)
{
	char cmd[CMD_LENGTH];
	char* tok[10];
	int result;
	
	while (TRUE) {
		printf("enter the command: ");
		
		fgets(cmd, CMD_LENGTH, stdin);
		
		make_token(cmd, tok);
		

		if (strcmp("q", tok[0]) == 0) {
			break;
		} else if (strcmp("--help",tok[0]) == 0) {
			printf("+--------------------------------------------+\n");
			printf("|                    help                    |\n");
			printf("+--------------------------------------------+\n");
			printf("|            [file] [commad] [arg]           |\n");
		} else if (strcmp("read",tok[1]) == 0) {
			result = read_file(tok[0]);
		} else if (strcmp("write",tok[1]) == 0) {
			result = write_file(tok[0]);
		} else if (strcmp("append",tok[1]) == 0) {
			result = append_file(tok[0]);
		} else if (strcmp("remove",tok[1]) == 0) {
			result = remove_file(tok[0]);
		}
		
		if(result == 1){
			printf("command success\n");
		} else {
			printf("command failed\n");
		}
	}
	
	return 0;
}
