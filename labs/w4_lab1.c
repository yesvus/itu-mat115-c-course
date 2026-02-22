/**
 * @file w4_lab1.c
 * @author Yusuf Emir Samsa
 * @brief W4 Lab1
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main(){
	char ch1, ch2, ch3;
	double harmonicMean;
	
	
	printf("Enter the first character: ");
	ch1 = getchar();
	getchar();
	
	printf("Enter the second character: ");
	ch2 = getchar();
	getchar();
	
	printf("Enter the third character: ");
	scanf("%c", &ch3);
	
	
	harmonicMean = (double)( 2 / ( (double)(1/ch1) + (double)(1/ch3) ) );
	
	printf("Harmonic mean of %c and %c is greater than %c: %d", ch1, ch3, ch2, harmonicMean > ch2 );
	printf(" (1 Means True)");
	
	return 0;
}
