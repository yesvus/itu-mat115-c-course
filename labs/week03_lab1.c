/**
 * @file week03_lab1.c
 * @author Yusuf Emir Samsa
 * @brief W3 Lab1
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main(){
	char firstChar, secondChar;
	double mean;
	
	printf("Please enter the first character: ");
	firstChar = getchar();
	getchar();
	
	printf("Please enter the second character: ");
	secondChar = getchar();
	
	mean = (double)(firstChar + secondChar)/2;
	printf("\nArithmetic mean of %c and %c is %.1lf", firstChar, secondChar, mean);
	
	return 0;
}
