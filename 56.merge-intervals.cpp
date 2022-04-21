/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin() , intervals.end());
        for(auto v : intervals){
            // no overlap
            if(ans.empty() || ans.back()[1] < v[0]  )
                ans.push_back(v);
            else
                ans.back()[1] = max(v[1] , ans.back()[1] );
        }
        return ans;

    }


};
// @lc code=end

