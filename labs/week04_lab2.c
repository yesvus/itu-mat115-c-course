/**
 * @file week04_lab2.c
 * @author Yusuf Emir Samsa
 * @brief W4 Lab2
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <math.h>
#define PI 3.141593
float degToRad(float degree);
float radToDeg(float rad);


int main(){
	float a, b, c, alpha, beta, gamma, alpha_rad, beta_rad, gamma_rad;
	a = 5.0;
	b= 7.0;
	gamma = 55.0;
	gamma_rad = degToRad(gamma);
	
	c = sqrt( pow(a,2) + pow(b,2) - 2*a*b*cos(gamma_rad) );
	printf("The length of side c is: %.3f", c);
	
	
	alpha_rad = asin((a/c)*sin(gamma_rad));
	beta_rad = asin((b/c)*sin(gamma_rad));
	
	alpha = radToDeg(alpha_rad);
	beta = radToDeg(beta_rad);
	
	printf("\nThe angle alpha is %.3f degrees and the angle beta is %.3f degrees", alpha, beta);
	
	return 0;
}




float degToRad(float degree)
{
    return (degree * (M_PI / 180));
}
 
float radToDeg(float rad)
{
	return (rad * (180 / M_PI));
}
