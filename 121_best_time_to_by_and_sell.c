#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    // If there are fewer than 2 prices, no transaction can be made
    if (pricesSize < 2) {
        return 0;
    }
    
    int min_price = prices[0];
    int max_profit = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        // If we find a lower buying price, update min_price
        if (prices[i] < min_price) {
            min_price = prices[i];
        } 
        // Otherwise, calculate potential profit and update max_profit if it's higher
        else {
            int current_profit = prices[i] - min_price;
            if (current_profit > max_profit) {
                max_profit = current_profit;
            }
        }
    }
    
    return max_profit;
}