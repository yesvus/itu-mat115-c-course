/**
 * @file square_of_a_number.c
 * @author Yusuf Emir Samsa
 * @brief Square Of A Number
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <math.h>

int main(){
	int num, result;
	printf("please enter a number: ");
	scanf("%d", &num);
	result = pow(num,2);
	
	printf("The result is: %d ", result);
	
	return 0;
}

