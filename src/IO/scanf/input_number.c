#include <stdio.h>

#define LENGTH (4096)
#define TRUE (1)
#define FALSE (0)


int main(void)
{
	int sum = 0;
	int num;
	char line[LENGTH];

	while (TRUE) {
		if (fgets(line, LENGTH, stdin) == NULL) {
			clearerr(stdin);
			break;
		}
		
		if (sscanf(line, "%d", &num) == 1) {
			sum += num;
			printf("sum: %d\n", sum);
		}
	}
	return 0;
}
