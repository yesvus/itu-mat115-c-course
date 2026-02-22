/**
 * @file week10_lab1.c
 * @author Yusuf Emir Samsa
 * @brief Lab10 1
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <stdlib.h>

void isIn(char *snt){
	
	char ltr;
	int i;
	
	
	getchar();
	printf("Please enter the letter: ");
	scanf("%c", &ltr);
	
	
	printf("Is the letter found in the sentence: "); 
	for(i=0; snt[i] != '\0' ;i++){
		if(ltr == snt[i]){
			printf("Yes"); return;
		}
	}
	printf("No");
	
}

int main(){
	char *snt;
	int i;
	
	snt = (char*)malloc(81*sizeof(char));
	
	printf("Please enter the sentence (80 characters): ");
	scanf("%80[^\n]", snt);
	
	isIn(snt);
	

	return 0;
}
