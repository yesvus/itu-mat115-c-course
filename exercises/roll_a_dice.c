/**
 * @file roll_a_dice.c
 * @author Yusuf Emir Samsa
 * @brief Roll A Dice
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dice(int times);


int main(){
	int rollTimes = 2;
	printf("%d times roll: %d\n", rollTimes, dice(rollTimes));
	
	return 0;
}

int dice(int times){
	int diceTotal, i, diceNum;
	
	srand( time(NULL));
	diceTotal = 0;
	
	
	for( i=1; i <= times; i++) {
		diceNum = 1 + (rand() % 6);
		diceTotal += diceNum;
	};

	return diceTotal;
}
