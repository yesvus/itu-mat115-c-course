/**
 * @file find_digit.c
 * @author Yusuf Emir Samsa
 * @brief Find Digit
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <math.h>
int findDigit(int K, int d);


int main()
{
	int K, d, isDigit, isPosInt;
	
	// Checks whether K is positive or not
	isPosInt = 0;
	while (isPosInt == 0)
	{
		printf("Enter the positive integer K: ");
		scanf("%d", &K);
		isPosInt = (K >= 1);
	}
	
	// Checks whether d is a digit or not
	d = -1; isDigit = 0;
	while (isDigit == 0)
	{
		printf("Enter the digit d: ");
		scanf("%d", &d);
		isDigit = (d <= 9 && d >= 0);
	}

	
	printf("The largest position %d appears in %d is %d.", d, K, findDigit(K,d));
	
	
	return 0;
}

int findDigit(int K, int d)
{
	int i, appearsIn, digit;
	
	// To store the digit of the number
	i = 0; appearsIn = -1;
	while(K != 0)
	{
		digit = K % 10;
		if(digit==d)
			appearsIn = i;
	
		K = K/10;
		i++;
	}
	return appearsIn;
}
