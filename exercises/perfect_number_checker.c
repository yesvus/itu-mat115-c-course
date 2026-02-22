/**
 * @file perfect_number_checker.c
 * @author Yusuf Emir Samsa
 * @brief Perfect Number Checker
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main()
{
	int num, sum, k;
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	printf("Factors of the %d are: ", num);
	for (k = 1; k < num; k++){
		if (num%k == 0){
			printf("%d ", k);
			sum += k; 
		}
	}
	printf("\nThe sum of these numbers is %d,", sum);
	
	if(sum == num)
		printf(" so %d is a perfect number", num);
	else
		printf(" so %d is NOT a perfect number.", num);
	
}
