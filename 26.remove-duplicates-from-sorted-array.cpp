/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int l = 1;
        int r = 1;
        while(r<size){
            if(nums[r-1] == nums[r])
                r++;
            else{
                nums[l] = nums[r];
                l++;
                r++;
            }       
        }
        return l;
    }
};
// @lc code=end

