/**
 * @file switch_calculator.c
 * @author Yusuf Emir Samsa
 * @brief Switch Calculator
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main()
{
	double num1, num2, answer;
	char opr;
	
	printf("Please enter a calculation in the form a+b: ");
	scanf("%lf %c %lf", &num1, &opr, &num2);
	
	
	
	switch(opr)
	{
		case '+': answer = num1 + num2; break;
		case '-': answer = num1 - num2; break;
		case '*': answer = num1 * num2; break;
		case '/': answer = num1 / num2; break;
		default: printf("Please enter a valid calculation in the form of a+b or a-b or a*b or a/b.");
		
	}
	
	
	if(num2 == 0 && opr == '/')
	printf("Cannot divide with 0.");
	else
	printf("%.2lf %c %.2lf = %.2lf", num1, opr, num2, answer);
	
	return 0;
}
