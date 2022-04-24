/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int l = 0;
        int r = 0;
        int sum = 0;
        int ans =10000 , diff=0;
        sort(nums.begin() , nums.end());
        for(int i = 0 ;  i<nums.size()-1  ; i++){
            l = i+1;
            r = nums.size()-1;
            while(l<r){
                sum = nums[i];
                sum+=nums[l]+nums[r];
                diff = abs(target - sum);
                ans = abs(target - ans) > diff ? sum : ans;
                if(sum<target)
                    l++;
                else if(sum>target)
                    r--;
                else
                    return sum;
            }
        }
        return ans;
    }
};
// @lc code=end

