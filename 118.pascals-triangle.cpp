/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascals;
        for(int i = 0 ; i< numRows ; i++){
            vector<int>temp;
            for(int j = 0 ; j<=i ; j++){
                if(j==0 || j == i)
                    temp.push_back(1);
                else
                    temp.push_back(pascals[i-1][j-1] + pascals[i-1][j]);
            }
            pascals.push_back(temp);
        }
        return pascals;
    }
};
// @lc code=end

