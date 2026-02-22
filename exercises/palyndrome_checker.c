/**
 * @file palyndrome_checker.c
 * @author Yusuf Emir Samsa
 * @brief Palyndrome Checker
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main()
{
	int d1, d2, d3, d4, d5, numToCheck;
	
	printf("Please enter a 5-digit number: ");
	scanf("%d", &numToCheck);
	
	d1 = numToCheck % 10;
	d2 = ((numToCheck % 100) - d1) / 10 ;
	d3 = ((numToCheck % 1000) - d2 - d1) / 100;
	d4 = ((numToCheck % 10000) - d3 - d2 - d1) / 1000 ;
	d5 = ((numToCheck % 100000) - d4 - d3 - d2 - d1) / 10000;
	
	if(d1 == d5 && d2 == d4)
		printf("The number %d is a palyndrome.", numToCheck);
	else
		printf("The number %d is NOT a palyndrome.", numToCheck);
	
	
	return 0;
}
