/**
 * @file w6_lab1.c
 * @author Yusuf Emir Samsa
 * @brief W6 Lab1
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
void TriangleType(int x1, int x2, int x3);
int CheckTriangle(int edge1, int edge2, int edge3);


/* This program classifies the entered triangle. Before the classification, checks whether the edges form a 
triangle or not. */

int main()
{
	TriangleType(2,5,6);
	TriangleType(5,5,5);
	TriangleType(2,5,5);
	TriangleType(4,6,4);
	TriangleType(5,1,1); // Impossible triangle example
	
	return 0;
}

void TriangleType(int edge1, int edge2, int edge3)
{
	if (CheckTriangle(edge1, edge2, edge3)){     // Check whether the edges form a triangle or not.
		
		if (edge1 == edge2 && edge2 == edge3)    // Classify the triangle
		printf("equilateral triangle\n");
		else if ((edge1 == edge2 || edge1 == edge3 || edge2 == edge3) && 
		!(edge1 == edge2 && edge2 == edge3))
		printf("isosceles triangle\n");
		else
		printf("scalene triangle\n");
	}
	else 
	printf("Cannot form a triangle with %d, %d and %d as it does not satisfy the triangle inequality.",
	edge1, edge2, edge3);
}

int CheckTriangle(int edge1, int edge2, int edge3)   // Triangle checking function from the last week, returns 1 if True
{
	int isTriangle = ((edge1 + edge2) > edge3) && ((edge1 + edge3) > edge2) && ((edge2 + edge3) > edge1);
	return isTriangle;
}

