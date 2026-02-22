/**
 * @file matrix_test.c
 * @author Yusuf Emir Samsa
 * @brief Matrix Test
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main(){
	int i, k, size;
	
	srand(time(NULL));
	
	printf("Please enter the size of the matrix: ");
	scanf("%d", &size);
	
	// Generate the matrix
	int mtx[size][size];
	printf("The matrix generated is:\n");
	for(i=0;i<size;i++){
		for(k=0;k<size;k++){
			mtx[i][k] = 8 + (rand() % 16);
			printf("%3d ", mtx[i][k]);
		}
		printf("\n");
	}
	
	int toSearch = 23;
	
	for(i=0;i<size;i++){
		for(k=0;k<size;k++){
			if(mtx[i][k] == toSearch)
			printf("The value %d found in the row %d and column %d.\n", toSearch, i+1, k+1);
		}
	}
		
	return 0;
}


