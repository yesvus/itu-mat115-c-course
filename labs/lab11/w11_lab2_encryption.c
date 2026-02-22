/**
 * @file w11_lab2_encryption.c
 * @author Yusuf Emir Samsa
 * @brief W11 Lab2 Encryption
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>


void encryption(char *s){
	
	int i = 0;
	while(s[i] != '\0'){
		s[i]++;
		i++;
	}
}

int main(){
	
	//testing the function
	char s[] = "Coffee";
	encryption(s);
	printf("Encryption of coffee: %s\n", s);
	
	//open files
	FILE *fin = fopen("words.txt", "r");
	FILE *fout = fopen("encrypted.txt", "w");
	
	if(fin == NULL){
		printf("Cannot open %s\n","words.txt");
		return 1;
	}
	
	printf("Encryption of the words in the file:\n");
	char word[30]; 
	
	while (fscanf(fin, "%s", word) == 1) {
		encryption(word);
        printf("%s\n", word);
        fprintf(fout, "%s ", word);
    }

	fclose(fin);
	fclose(fout);
	
    printf("Encrypted words are written to file named \"encrypted.txt.\" ");
    
    
	return 0;
}
