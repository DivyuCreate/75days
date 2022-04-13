/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int>ans(size);
        // ans.reserve(size);
        int l = 0;
        int r = size-1;
        int  n = size-1;
        while(l<=r){
            if(abs(nums[l]) < abs(nums[r]))
            {
                ans[n--] = nums[r]*nums[r];
                r--;
            }
            else{
                ans[n--] = nums[l]*nums[l];
                l++;
            }
        }
        return ans;
    }
};
// @lc code=end

