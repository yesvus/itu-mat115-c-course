/**
 * @file program2.c
 * @author Yusuf Emir Samsa
 * @brief Program2
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

/* 
Yusuf Emir Samsa 
090220056

2nd Program
*/

#include <stdio.h>

int main(){
	float a, b;
	printf("Enter the value of a: ");
	scanf("%f", &a);
	
	printf("Enter the value of b (b > a): ");
	scanf("%f", &b);
	
	// Checks whether the condition b > a holds or not
	if (a >= b){
		printf("b should be less than a!");
		return -1;
	}
	
	
	
	return 0;
}
