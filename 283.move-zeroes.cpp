/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
                int left = 0;
        for(int r = 0;r<nums.size() ; r++){
            if(nums[r]){
                swap(nums[left] , nums[r]);
                left++;
            }
        }
    }
};
// @lc code=end

