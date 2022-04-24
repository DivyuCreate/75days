/*
 * @lc app=leetcode id=1010 lang=cpp
 *
 * [1010] Pairs of Songs With Total Durations Divisible by 60
 */

// @lc code=start
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n = time.size();
        int c = 0;
        vector<int>remcount(60,0);
        for(int i = 0; i<n ; i++){  
            int x = time[i];
            int rem = x%60;
            if(!rem) c+=remcount[0];
            else c+=remcount[60-rem];
            remcount[rem]++;
        }
        return c;
    }
};
// @lc code=end

