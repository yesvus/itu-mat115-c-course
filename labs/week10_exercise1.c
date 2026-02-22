/**
 * @file week10_exercise1.c
 * @author Yusuf Emir Samsa
 * @brief W10Exercise1
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

/* Diziyi fonksiyona gnder ortalamay hesapla ortdan 
byk kk elemanlar yazdr */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float func(int *arr);

int main(){
	int i, arr[20];
	
	srand(time(NULL));
	
	printf("The array is: ");
	for(i=0;i<20;i++){
		arr[i] = rand() % 61;
		printf("%d ", arr[i]);
	}
	
	float y = func(arr);
	printf("\ny is %f and the elements less than y are: ", y);
	for(i=0;i<20;i++){
		if(arr[i]<y)
			printf("%d ", arr[i]);
	}
	
	
	return 0;
}

float func(int *arr){
	
	int i;
	int sum = 0;
	for(i=0;i<20;i++){
		sum += arr[i];
	}
	return (float)sum/20;
}
