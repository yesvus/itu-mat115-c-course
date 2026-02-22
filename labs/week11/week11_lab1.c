/**
 * @file week11_lab1.c
 * @author Yusuf Emir Samsa
 * @brief W11 Lab
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <string.h>

void reverse(char* s){
	int size, i;
	size = strlen(s);
	char reversed[size];
	
	for(i=0; i < size; i++){
		reversed[i] = s[size-1-i];
	}	
	
	for(i=0; i < size; i++){
		s[i] = reversed[i];
	}	
}


int main(){
	
	// testing the reverse func
	char testS[] = "Coffee";
	reverse(testS);
	printf("Reversed version of Coffee is %s\n", testS);
	
	
	FILE *fin = fopen("wordsq2.txt", "r");
	if(fin == NULL){
		printf("Cannot open %s\n","words.txt");
		return 1;
	}
	
	FILE *fout = fopen("reversed.txt", "w");
	
	char word[30], reversed[30];
	
	while(fscanf(fin, "%s", word) == 1) {
		reverse(word);
		fprintf(fout, "%s\n", word);
	}
	
	fclose(fin);
	fclose(fout);
	
	printf("Reversed words have been written to reversed.txt.\n");
	
	return 0;
}
