/**
 * @file q1.c
 * @author Yusuf Emir Samsa
 * @brief Q1
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

/*
Yusuf Emir Samsa
090220056

QUESTION1
*/



#include <stdio.h>

enum{SUCCESS, FAIL, NO_LENGTH=9};

int main(){
	int i, studentNo[NO_LENGTH] = {0,9,0,2,2,0,0,5,6};
	
// a) Write even and odd numbers to files
	FILE *fEven, *fOdd;
	fEven = fopen("even.txt","w");
	fOdd = fopen("odd.txt","w");
	
	if (fEven == NULL || fOdd == NULL){
		printf("Unable to open the files!");
		return FAIL;
	}
	
	for(i=0; i < NO_LENGTH;i++){
		if (studentNo[i]%2 == 0){
			fprintf(fEven,"%d ", studentNo[i]);
		}
		else{
			fprintf(fOdd,"%d ", studentNo[i]);
		}		
	}
	printf("Numbers and their sum are written to the files even.txt and odd.txt succesfully.\n");
	fclose(fEven);
	fclose(fOdd);
	
// b) Append the sum at the end of the line for each file
	fEven = fopen("even.txt","a");
	fOdd = fopen("odd.txt","a");
	
	if (fEven == NULL || fOdd == NULL){
		printf("Unable to open the files!");
		return FAIL;
	}
	
	int sumEven = 0, sumOdd = 0;
	
	for (i=0; i<NO_LENGTH; i++){
		if(studentNo[i]%2 == 0)
			sumEven += studentNo[i];
		else
			sumOdd += studentNo[i];
	}
	
	fprintf(fEven," %d", sumEven);
	fprintf(fOdd," %d", sumOdd);


// c) Read the text.txt and store ASCII values of letters in an array
	FILE *fIn;
	fIn = fopen("text.txt","r");
	
	if (fIn == NULL){
		printf("Unable to open the file.");
		return FAIL;
	}
	
	char word[30]; // Buffer to store each word
	int asciiArr[1000]; // Array to store all the ASCII values
	int count = 0; // Counter for the number of letters processed
	while(fscanf(fIn, "%s", word) == 1) {
		
		// To ignore punctuations and spaces
		for(i=0; word[i] != '\0'; i++){
			char ch = word[i];
			if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
				asciiArr[count] = (int)ch;
				count++;
			}
		}
	}
	fclose(fIn);
    
// d) Write ASCII values to even.txt and odd.txt
    fprintf(fEven, "\n");  // Start a new line for even values
    fprintf(fOdd, "\n");   // Start a new line for odd values
    
    for(i=0; i < count; i++){
		if (asciiArr[i]%2 == 0)
			fprintf(fEven,"%d ", asciiArr[i]);
		else
			fprintf(fOdd,"%d ", asciiArr[i]);
	}
	fclose(fEven);
	fclose(fOdd);
	return SUCCESS;
}
