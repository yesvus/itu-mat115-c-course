/**
 * @file week09_exercise.c
 * @author Yusuf Emir Samsa
 * @brief W9 Exercise
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */



// 5 elemanli dizi ac mallocla ac sadece -1le 1 elamanlarn random gir
// sonra reallocla 10 elemanli diziye cevir sonra yine random elemanlar ekle

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int *ptr, i, size = 5;
	ptr = (int*) malloc(sizeof(int)*size);
	
	srand(time(NULL));
	
	 if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
	printf("\n5 sized array: ");
	for(i=0;i < size; i++){
		ptr[i] = 2*(rand() % 2) - 1;
		printf("%d ", ptr[i]);
	}
	
	size = 10;
	printf("\nNew array for changed size 10:: ");
	ptr = (int*)realloc(ptr, size*sizeof(int));
	for(i=5;i < size; i++){
		ptr[i] = 2*(rand() % 2) - 1;
	}
	
	for(i=0;i < size; i++){
		printf("%d ", ptr[i]);
	}
	
	return 0;
}
