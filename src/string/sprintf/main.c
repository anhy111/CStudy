#include <stdio.h>

int main(void)
{
	char buffer[100];
	int score = 100;
	const char* name = "Rachel";
	
	sprintf(buffer, "%s: %d", name, score);
	
	sprintf(buffer, "%s: %d", name, score);
	
	printf("%s\n", buffer);
	
	return 0;
}
