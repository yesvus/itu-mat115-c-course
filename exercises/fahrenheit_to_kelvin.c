/**
 * @file fahrenheit_to_kelvin.c
 * @author Yusuf Emir Samsa
 * @brief Fahrenheit To Kelvin
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main(){
	float fh, kl;
	printf("Please enter the Fahrenheit value: ");
	scanf("%f", &fh);
	kl = (fh-32)/1.8 + 273.15;
	
	printf("%.2f Fahrenheit is equal to %.2f Kelvin", fh, kl);
	return 0;
}
