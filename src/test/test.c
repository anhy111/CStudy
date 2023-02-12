#include <stdio.h>

int bound(int w, int h, int j, int i) 
{
	if( i>=0 && i<h && j>=0 && j<w)
		return 1;
	return 0;
}

int main(void)
{
	int mines[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	int field[4][4] = {{0,1,0,1},{0,0,0,1},{1,1,1,0},{0,1,1,1}};
	int w = 4;
	int h = 4;
	int y,x,i,j,q,k;
	for(y=0; y<h; y++){
		for(x=0; x<w; x++){
			if(field[y][x] == 0){
				continue;
			}
			for(i=y-1; i<=y+1; i++){
				for(j=x-1; j<=x+1; j++){
					if(bound(w,h,i,j) == 1){
						mines[i][j]++;
					}
				}
			}
		}
		
		for(q=0; q<h; q++){
			for(k=0; k<w; k++){
				printf("%d", mines[q][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	printf("result:\n");
	for(y=0; y<h; y++){
		for(x=0; x<w; x++){
			printf("%d", mines[y][x]);
		}
		printf("\n");
	}
	
	return 0;
	
}
