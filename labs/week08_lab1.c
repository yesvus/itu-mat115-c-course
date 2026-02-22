/**
 * @file week08_lab1.c
 * @author Yusuf Emir Samsa
 * @brief W8 Lab1
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <stdio.h>
#include <time.h>
int ARR_MIN(int arr[12]);

int main(){
	int i, randNums[12];
	srand( time(NULL));
	
	for(i=0;i <= 11;i++){
		randNums[i] = -50 + (rand() % 101);
	}
	
	printf("The array is: ");
	for(i=0;i <= 11;i++){
		printf("%d\t", randNums[i]);
	}
	
	
	printf("\nPositive numbers in the array are: ");
	for(i=0;i <= 11;i++){
		if (randNums[i] > 0)
		printf("%d\t", randNums[i]);
	}
	printf("\nNegative numbers in the array are: ");
	for(i=0;i <= 11;i++){
		if (randNums[i] < 0)
		printf("%d\t", randNums[i]);
	}
	printf("\nThe minimum of the array is: %d", ARR_MIN(randNums));
	
	return 0;
}

// Find the mininmum of the 12 element array
int ARR_MIN(int arr[12]){
	// asume the minimum
	int i, min;
	min = arr[0];
	for(i=0;i<=11;i++){
		if(arr[i] < min)
		min = arr [i];
	}
	return min;
}
