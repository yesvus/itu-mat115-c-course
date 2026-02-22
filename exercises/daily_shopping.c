/**
 * @file daily_shopping.c
 * @author Yusuf Emir Samsa
 * @brief Daily Shopping
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>

int main(){
	float spentShopping, receivedDiscount, shippingFee, additionalExpenses, totalCost;
	int purchasedItems;
	
	printf("Please enter the total amount spent on shopping: ");
	scanf("%f", &spentShopping);
	
	printf("Please enter the total number of items purchased: ");
	scanf("%d", &purchasedItems);
	
	printf("Please enter the discount received during shopping: ");
	scanf("%f", &receivedDiscount);
	
	printf("Please enter the shipping fee: ");
	scanf("%f", &shippingFee);
	
	printf("Please enter the additional expenses: ");
	scanf("%f", &additionalExpenses);
	
	totalCost = spentShopping - receivedDiscount + shippingFee + additionalExpenses;
	printf("\nTotal daily  shopping cost: $%.2f ", totalCost);
	
	return 0;
}
