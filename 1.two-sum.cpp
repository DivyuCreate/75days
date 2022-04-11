/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<pair<int,int>>v;
        vector<int>ans;
        int n = nums.size();
        for(int i = 0 ; i<nums.size() ; i++){
            v.push_back({nums[i] , i});
        }
        sort(v.begin(),v.end());
        int j = n-1;
        int i = 0;
        while(i<j && i<n && j>0){
            if(v[i].first + v[j].first == target){
                ans.push_back((v[i].second));
                ans.push_back((v[j].second));
                break;
            }
            else if(v[i].first + v[j].first < target){
                i++;
            }
            else
                j--;
        }
        return ans;
    }
};
// @lc code=end

