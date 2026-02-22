/**
 * @file program1.c
 * @author Yusuf Emir Samsa
 * @brief Program1
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

/* 
Yusuf Emir Samsa 
090220056

1st Program
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int i, x[20];
	srand(time(NULL));
	
	// 1) Generates and displays the array
	printf("Array: ");
	for(i=0;i<20;i++){
		x[i] = -60 + (rand() % 91);
		printf("%d, ", x[i]);
	}
	
	// 2) Calculates and displays the y
	float y;
	for(i=0;i<20;i++){
		y+=x[i];
	}
	y /= 20;
	
	printf("\nThe value of y is: %.2f \n", y);
	
		if(y>0){
		printf("The value of y is positive.");
	}
	else if(y==0){
		printf("The value of y is zero.");
	}
	else{
		printf("The value of y is negative.");
	}
	
	// 3) Compares elements with y
	int sum;
	for(i=0;i<20;i++){
		if(x[i]<y)
		sum++;
	}
	printf("\nNumber of elements < y: %d", sum);
	
	
	// 4) Displays odd-numberes elements
	printf("\nOdd numbered elements: ");
	for(i=0;i<20;i++){
		if(x[i]%2 != 0)
		printf("\nx[%d] = %d", i, x[i]);
	}
	
	
	return 0;
}
