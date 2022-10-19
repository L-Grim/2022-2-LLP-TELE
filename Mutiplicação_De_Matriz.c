#include <stdio.h>

void f_Mutiplicacao (m1, m2, ms, n)
	int m1 [] [3];
    int m2 [] [3];
    int ms [] [3];
    int n;
{
	int i;
	for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
        	ms[i][j] = m1[i][j] * m2[i][j];
        };
    };
};

void f_Imprime_Matriz (m, n) 
int m[] [3];
int n;
{
	printf("\nMatriz\n");
		for (int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				printf("Matriz[%d][%d] = %d  ", i, j, m[i][j]);
			};
        	printf("\n"); 
		};
};


int main () {
	int i, j;
	int M1 [3] [3] = { 
		{ 1 , 2 , 3 },
		{ 4 , 8 , 10 },
		{ 5 , 6 , 7 }
	};
	
		int M2 [3] [3] = { 
		{ 4 , 1 , 1 },
		{ 6 , 5 , 2 },
		{ 8 , 3 , 7 }
	};
    
    	int MS [3] [3] = {
    	{ 0 , 0 , 0 },
    	{ 0 , 0 , 0 },
    	{ 0 , 0 , 0 }
    };
	
	printf("Matriz M1\n");
	for (int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("Matriz[%d][%d] = %d  ", i, j, M1[i][j]);
		};
        printf("\n"); 
	};
		
			printf("\nMatriz M2\n");
	for (int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("Matriz[%d][%d] = %d  ", i, j, M2[i][j]);
		};
        printf("\n");
	};
f_Mutiplicacao (M1, M2 ,MS ,3);

f_Imprime_Matriz (MS, 3);
        
		return 0;
};

