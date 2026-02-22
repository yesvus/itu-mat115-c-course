/**
 * @file week05_lab1.c
 * @author Yusuf Emir Samsa
 * @brief W5 Lab1
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int check_letter(char ch);


int main()
{
	srand( time(NULL));	
	char randChar = 32 + (rand() % 95);
	printf("%c is from alphabet or not: %d", randChar, check_letter(randChar));
	
	return 0;
}

int check_letter(char ch)
{
	int isLetter = ((ch >= 97) && (ch <= 122)) || ((ch >= 65) && (ch <= 91));
	return isLetter;
}
