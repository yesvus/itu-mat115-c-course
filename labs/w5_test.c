/**
 * @file w5_test.c
 * @author Yusuf Emir Samsa
 * @brief W5 Test
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main()
{
	int toCheck; 
	
	printf("Enter 0 or 1: ");
	scanf("%d", &toCheck);
	
	if(toCheck == 1)
	{
		printf("True");
	} 
	else
	{
		printf("False");
		printf("\nTest for else statement");
	}
	
	return 0;
}
