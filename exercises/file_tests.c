/**
 * @file file_tests.c
 * @author Yusuf Emir Samsa
 * @brief File Tests
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>


enum{SUCCESS, FAIL};
	
int check_file(){
	
	FILE *p;
	p= fopen("file1.txt", "r");
	int flag = SUCCESS;
	
	if(p == NULL){
		printf("Cannot open %s\n","file1.txt");
		flag = FAIL;
	}
	else {
		printf("No problem.\n");
		printf("Ready to close the file");
		fclose(p);
	}	
	return flag;
}

void write_file(){
	FILE* p; int i;
	p = fopen("file1.txt", "w");
	char s[] = "1 2 3 4 5";
	fputs(s,p);
	printf("%s written to the file1.txt.\n", s);
	
	fclose(p);
}





int main(){
	write_file();
	check_file();
	
	
	return 0;
}
