/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int i = 0 , j = numbers.size()-1;
        vector<int>t;
        while (i<=j)
        {
            if(numbers[i] + numbers[j] == target){
                t.push_back(i+1);
                t.push_back(j+1);
                return t;
            }
            else if(numbers[i] + numbers[j]>target)
                j--;
            else
                i++;
        }
        return t;
    }
};
// @lc code=end

