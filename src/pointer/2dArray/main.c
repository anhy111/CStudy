#include <stdio.h>

void do_magic(int matrix[][], size_t m)
{
	size_t i, j;
	
	printf("matrix :\n");
	for (i=0; i < m; i++){
		for(j=0; j<10; j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int matrix[5][10] = {
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
	};
	
	do_magic(matrix, 5);
	
	return 0;
}
