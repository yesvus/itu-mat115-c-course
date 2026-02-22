/**
 * @file w9_lab1.c
 * @author Yusuf Emir Samsa
 * @brief W9 Lab1
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main(){
	int var1 = 40,
		var2 = 0,
		*ptr1,
		*ptr2,
		*ptr3;
	
	ptr1 = &var1;
	ptr2 = &var2;
	ptr3 = ptr2; // Temporarily holds the value of ptr2
	
	printf("Before swap: Pointer 1 points to %d, Pointer 2 points to %d", *ptr1, *ptr2);
	
	// Swapping
	ptr2 = ptr1;
	ptr1 = ptr3;
	
	printf("\nAfter swap: Pointer 1 points to %d, Pointer 2 points to %d", *ptr1, *ptr2);
	
	return 0;
}
