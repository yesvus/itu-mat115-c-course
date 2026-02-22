/**
 * @file is_triangle.c
 * @author Yusuf Emir Samsa
 * @brief Is Triangle
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int check_triangle(int edge1, int edge2, int edge3);


int main()
{
	int edge1, edge2, edge3;
	srand( time(NULL));
	edge1 = 3 + (rand() % 8);
	edge2 = 3 + (rand() % 8);
	edge3 = 3 + (rand() % 8);
	
	printf("Do %d, %d and %d can form a triangle: %d", edge1, edge2, edge3,
	check_triangle(edge1, edge2, edge3));
	
	return 0;
}

int check_triangle(int edge1, int edge2, int edge3)
{
	int isTriangle = ((edge1 + edge2) > edge3) && ((edge1 + edge3) > edge2) && ((edge2 + edge3) > edge1);
	return isTriangle;
}
