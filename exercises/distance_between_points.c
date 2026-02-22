/**
 * @file distance_between_points.c
 * @author Yusuf Emir Samsa
 * @brief Distance Between Points
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <math.h>

int main(){
	char x1, x2, y1, y2;
	double distance;
	
	printf("Enter the first point: ");
	x1 = getchar();
	getchar();
	y1 = getchar();
	getchar();
	
	printf("Enter the second point: ");
	x2 = getchar();
	getchar();
	y2 = getchar();
	
	distance = (double)sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
	
	printf("The distance between points (%c, %c) and (%c, %c) is %.3lf", x1, y1, x2, y2, distance);
	
	
	
	
	return 0;
}
