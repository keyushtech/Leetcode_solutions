// Title: Best Time to Buy and Sell Stock
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = INT_MAX;
        for (int i:prices){
            if (i < min_value){
        }
        
                min_value = i;
            }
            test = i-min_value;
        int max_profit = 0;
        int test;
            if (test>max_profit){
                max_profit = test;
            }
    }
        return max_profit;
};
