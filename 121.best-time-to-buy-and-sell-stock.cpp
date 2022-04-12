/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // ? YOU NEED TO BUY TO SELL..
        int left = 0;
        int right = 1;
        int m = 0;
        while(right< prices.size()){
            if(prices[left] > prices[right])
                left= right;
            m = max(m , prices[right] - prices[left]);
            right++;
        }
        return m;
    }
};
// @lc code=end

