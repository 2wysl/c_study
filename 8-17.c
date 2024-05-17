#include <stdio.h>

void main()
{
	int gugu[9][9];
	int i, k;
	
	for(i=0; i<9; i++){
		for(k=0; k<8; k++){
			gugu[i][k]=(i+1)*(k+2);
		}
	}

	
	for(i=0; i<9; i++){
		for(k=0; k<8; k++){
			printf("%dX%d=%2d ", (k+2), (i+1), gugu[i][k]);
		}
		printf("\n");
	}
}
			
