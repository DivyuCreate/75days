/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>um;
        // for(int i = 0;i<nums.size();i++){
        //     um[nums[i]]++;
        // }
        // int m = 0;
        // int res = 0, max_count = 0;
        // for (auto i : um) { 
        //     if (max_count < i.second) { 
        //         res = i.first; 
        //         max_count = i.second; 
        //     }
        // }
        // return res;


        // ! Second approach in O(n) with linear space
        // ? This approach make uses the fact there always exist a majority element!!

        int res = 0 , count = 0;
        for(auto n:nums){
            if (count == 0)
                res = n;
            n==res ? count++ : count--;
        }
        return res;
    }
};
// @lc code=end

