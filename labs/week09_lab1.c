/**
 * @file week09_lab1.c
 * @author Yusuf Emir Samsa
 * @brief Lab 09
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, size,
	*arr;
	
	printf("Please enter the size of the array: ");
	scanf("%d", &size);
	
	// Memory allocation
	arr = (int*)malloc(size*sizeof(int));
	
	if(arr==NULL){
		printf("Memory allocation failed.");
		return 0;
	}
	
	printf("The first array: ");
	for(i=0; i<size; i++){
		if(i%2==0)
			arr[i] = (19*i + 73) % size;
		else
			arr[i] = (13*i + 94) % size;
		
		// Prints the array
		printf("%d ", arr[i]);
	}

	int sum = 0;
	for(i=0;i<size;i++)
		sum += arr[i];
	float averageFirstArray = (float)sum/size;
	printf("\nAverage of the first array: %.2f", averageFirstArray);
	
	
	arr = realloc(arr, 2*size*sizeof(int));
	
	printf("\nThe expanded array: ");
	for(i=size; i<2*size; i++){
		if(i%2==0)
			arr[i] = (7*i + 119) % (2*size);
		else
			arr[i] = (11*i + 29) % (2*size);
	}
	
	
	for(i=0; i<2*size; i++)	
		printf("%d ", arr[i]);
	
	sum = 0;
	for(i=0;i<2*size;i++)
		sum += arr[i];
	float averageExpandedArray = (float)sum/(2*size);
	printf("\nAverage of the expanded array: %.2f", averageExpandedArray);
	
	
	if(averageExpandedArray > averageFirstArray)
		printf("\nArray has maximum average after expanded.");
	else if(averageExpandedArray == averageFirstArray)
		printf("\nArray has the same average before and after expanded.");
	else
		printf("\nArray has maximum average before expanded.");
	
	free(arr);
	
		
	return 0;
}
