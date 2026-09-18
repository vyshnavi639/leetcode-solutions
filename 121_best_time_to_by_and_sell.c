#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    //  if less than 2 prices, we cannot make any profit
    if (pricesSize < 2) {
        return 0;
    }
    
    int min_price = prices[0];
    int max_profit = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        // If we find a lower buying price, just update min_price
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