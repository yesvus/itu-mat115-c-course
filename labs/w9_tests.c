/**
 * @file w9_tests.c
 * @author Yusuf Emir Samsa
 * @brief W9 Tests
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main(){
	int val = 10, *arrPtr, *valPtr;
	int arr[4] = {1,2,3,4};
	
	arrPtr = &arr;
	valPtr = &val;
	
	printf("pointer: 0x%p value: %d\n", arrPtr, *arrPtr);
	printf("pointer: 0x%p value: %d\n", valPtr, *valPtr);
	
	return 0;
}
