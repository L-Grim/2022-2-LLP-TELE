#include <stdio.h>

int main() {

	int i, j;
	int matriz[5] [3] = { 
		{ 1 , 2 , 3 },
		{ 4 },
		{ 5 , 6 , 7 }
	};
	
	
    printf("Matriz Inteira\n");
	for (int i = 0; i < 5; i++) {
		for(int j = 0; j < 3; j++) {
			printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
		};
	};
	
	
    printf("\n"); 
	printf("Diagonal Principal\n");
	for (int i = 0; i < 5; i++) {
		for(int j = 0; j < 3; j++) {
			if (i == j) {
				printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
			};
		};
	};
	
	
	return 0;
}
