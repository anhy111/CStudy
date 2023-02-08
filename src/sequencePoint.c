#include <stdio.h>

int main(void){
	int i = 0;
	int j = 0;
	int k = 0;
	
	if ( ++i && ++j) || ++k)
	{
		printf("true!\n");
	}
	
	printf("i = %d\nj = %d\nk = %d\n", i, j, k);
}
