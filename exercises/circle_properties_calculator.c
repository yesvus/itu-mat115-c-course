/**
 * @file circle_properties_calculator.c
 * @author Yusuf Emir Samsa
 * @brief Circle Properties Calculator
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <math.h>

int main(){
	float pi, rad, dia, circ, area;
	
	pi = 3.14;
	printf("Please enter the radius: ");
	scanf("%f", &rad);
	
	dia = 2*rad;
	circ = 2*pi*rad;
	area= pi*pow(rad, 2);
	
	printf("The diameter is: %f", dia);
	printf("\nThe circumference is: %f", circ);
	printf("\nThe area is: %f", area);
	
	
	
	return 0;
	
}
