/**
 * @file maclaurin_series.c
 * @author Yusuf Emir Samsa
 * @brief Maclaurin Series
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <math.h>
float maclaurin(int n, float x);
int factorial(int k);

int main()
{
	int n, isPosInt;
	float x;
	
	isPosInt = 0;
	while (isPosInt == 0)
	{
		printf("Enter the positive integer n: ");
		scanf("%d", &n);
		isPosInt = (n >= 1);
	}
	
	printf("Enter real number x: ");
	scanf("%f", &x);
	
	printf("The first n-term summation of the Maclaurin series expansion for exp(x) is: %.3f", maclaurin(n,x));
	
	return 0;
}

float maclaurin(int n, float x)
{
	int k;
	float sum;
	for(k=0; k <= (n-1); k++)
	{
		sum += (pow(x, k) / factorial(k));
	}
	return sum;
}

// factorial function
int factorial(int k)
{
	int i, result;
	
	if(k==0)
	{
		return 1;
	}
		
	result = 1;
	for(i=1; i <= k ; i++)
	{
		result *= i;
	}
	return result;
}



