/**
 * @file average_of_numbers.c
 * @author Yusuf Emir Samsa
 * @brief Average Of Numbers
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main(){
	
	int num1, num2, num3;
	double avg;
	
	printf("Please enter the first number: ");
	scanf("%d", &num1);
	
	printf("Please enter the second number: ");
	scanf("%d", &num2);
	
	printf("Please enter the third number: ");
	scanf("%d", &num3);
	
	avg = (double)(num1 + num2 + num3)/3;
	printf("The average of these numbers is %lf", avg);
	
	return 0;
}
