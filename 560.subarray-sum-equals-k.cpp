vb/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int res = 0;
        unordered_map<int , int > pre;
        pre[0] = 1;
        for(int i = 0 ; i< nums.size() ; i++){
            sum+=nums[i];
            int s = sum-k;
            if(pre.find(s)!=pre.end()){
                res+=pre[s];
               // pre.erase(s);
            }
                pre[sum]++;
        }
        return res;
    }
};
// @lc code=end

