/**
 * @file week07_array_tests2.c
 * @author Yusuf Emir Samsa
 * @brief Array Tests2 W7
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
This program creates two 5x5 matrices whose elements are between 1 and 10
and finds the sum of these matrices. Then writes the elements which is higher
than 10 in the summed matrix.
*/

int main()
{
	int i, k, array_1[5][5], array_2[5][5], sumArray[5][5],
	bigger10;
	srand( time(NULL));
	
	for(i=0; i<=4; i++)
	{
		for(k=0; k<= 4; k++)
		{
			array_1[i][k] = 1 + (rand() % 10);
			array_2[i][k] = 1 + (rand() % 10);
		}
	}
	for(i=0; i<=4; i++)
	{
		for(k=0; k<= 4; k++)
		{
			sumArray[i][k] = array_1[i][k] + array_2[i][k];
		}
	}
	
	printf("The sum of\n");
	for(i=0; i<=4; i++)
	{
		for(k=0; k<= 4; k++)
		{
			printf("%5d", array_1[i][k]);
		}
		printf("\n");
	}
	printf("and \n");
	for(i=0; i<=4; i++)
	{
		for(k=0; k<= 4; k++)
		{
			printf("%5d", array_2[i][k]);
		}
		printf("\n");
	}
	printf("equal to:\n");
		for(i=0; i<=4; i++)
	{
		for(k=0; k<= 4; k++)
		{
			printf("%5d", sumArray[i][k]);
		}
		printf("\n");
	}
	
	for(i=0; i<=4; i++)
	{
		for(k=0; k<= 4; k++)
		{
			if(sumArray[i][k] < 10)
			bigger10++;
		}
	}
	printf("\nThe sum matrix has %d elements less than 10", bigger10);
	
	
	return 0;
}


