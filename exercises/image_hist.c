/**
 * @file image_hist.c
 * @author Yusuf Emir Samsa
 * @brief Image Hist
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>


int main(){
	
	int i, k, size;
	
	printf("Please enter the size of the image: ");
	scanf("%d", &size);
	int image[size][size];
	
	printf("Please enter the image data (%d x %d): as a sequence of 0's and 1's: ", size, size);
	for(i=0;i<size;i++){
		for(k=0;k<size;k++){
			scanf("%d", &image[i][k]);
		}
	}
	printf("The Image you have entered is:\n");
	for(i=0;i<size;i++){
		for(k=0;k<size;k++){
			printf("%d ",image[i][k]);
		}
		printf("\n");
	}
	
	//Calculating the histogram
	int hist[size];
	int rowSum;
	for(i=0;i<size;i++){
		rowSum=0;
		for(k=0;k<size;k++){
			rowSum += image[i][k];
		}
		hist[i]= rowSum;
	}
	
	printf("The Hist Array of the image:\n");
	for(i=0;i<size;i++){
		printf("%d\n", hist[i]);
	}
	return 0;
}
