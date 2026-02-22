/**
 * @file week06_lab2.c
 * @author Yusuf Emir Samsa
 * @brief W6 Lab2
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
void number_checker(int num);

/* For each integer number n:

	i.) If 4 <= n <= 6 then the program should print the word that corresponds to the numeral, like Four for the number 4.
	ii.) If not in this range and even, print Even.
	iii.) If not in this range and odd, print Odd.
	
This program includes a C function that takes such a number n as a parameter and accomplishes the above statements by using switch-case
structure */


int main()
{
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	number_checker(num);
	
	return 0;
}

void number_checker(int num)
{
		switch(num){
			case 4: printf("Four"); break;
			case 5: printf("Five"); break;
			case 6: printf("Six"); break;
			default: {
			if(num%2 == 0)
			printf("Even");
			else
			printf("Odd");	
			}
		}
		
}

