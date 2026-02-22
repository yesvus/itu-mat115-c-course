/**
 * @file matrix_operations.c
 * @author Yusuf Emir Samsa
 * @brief Matrix Operations
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int size, i, k;
	
	printf("Please enter the size of matrix: ");
	scanf("%d", &size);
	int arr[size][size];
	
	for(i=0; i<=(size-1); i++)
	{
		for(k=0; k<= (size-1); k++)
		{
			printf("Please enter the value for ( %d, %d ): ", i+1, k+1);
			scanf("%d", &arr[i][k]);
		}
	}
	
	printf("The matrix you have entered is:\n");
	for(i=0; i<size ; i++)
	{
		for(k=0; k<= (size-1); k++)
		{
			printf("%5d", arr[i][k]);
		}
		printf("\n");
	}
	
	// The sum of main diagonal matrix
	int mainDiag = 0;
	for(i=0; i < size; i++)
	{
		mainDiag += arr[i][i];
	}
	printf("Sum of the main diagonal of the matrix is: %d", mainDiag);
	
	// The sum of minor diagonal matrix
	int minorDiag = 0;
	for (i = 0; i < size; i++) {
        minorDiag += arr[i][size - i -1];
    }
	printf("\nSum of the minor diagonal of the matrix is: %d", minorDiag);
	
	
	if(mainDiag>minorDiag)
	{
		// Sum of all rows
		for(i=0; i<size; i++)
		{
			int rowSum=0;
			for(k=0; k< size; k++)
			{
				rowSum += arr[i][k];
			}
			printf("\nSum of Row %d: %d", i + 1, rowSum);
				
		}
	}
	else if(minorDiag>mainDiag)
	{
		// Sum of all columns
		for(i=0; i<size; i++)
		{
			int rowCol=0;
			for(k=0; k< size; k++)
			{
				rowCol += arr[k][i];
			}
			printf("\nSum of Column %d: %d", i + 1, rowCol);
				
		}
	}
	else
	{
		// sum of all elements
		int elmSum=0;
		for(i=0; i<size; i++)
		{
		
			for(k=0; k< size; k++)
			{
				elmSum += arr[i][k];
			}		
		}
		printf("\nSum of all elements: %d", elmSum);
	}
	return 0;
	
	
	
	
	
}
