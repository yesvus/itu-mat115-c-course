/**
 * @file velocity_and_aclr.c
 * @author Yusuf Emir Samsa
 * @brief Velocity And Aclr
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <math.h>

int main(){
	double time, aclr, vlc;
	
	printf("Please enter the time: ");
	scanf("%lf", &time);
	
	vlc = (1.0E-5)*pow(time, 3) - (4.88E-3)*pow(time, 2) + 7.5795E-1*(time) + 181.3566;
	
	aclr = 3 - (6.2E-5 * pow(vlc, 2));
	
	printf("The velocity is %lf and the acceleration is %lf", vlc, aclr);
	
	return 0;
}
