/**
 * @file char_to_int.c
 * @author Yusuf Emir Samsa
 * @brief Char To Int
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main(){
	int  n1;
	
	printf("Please enter a character: ");
	n1 = getchar();
	
	printf("The integer value of %c is %d", n1, n1);
		
	return 0;
}
