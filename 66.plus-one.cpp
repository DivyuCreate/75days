/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int>r;
        reverse(digits.begin() , digits.end());
        int carry =0 ;
        int l = digits[0];
        int sum = l +1;
        l = sum%10;
        carry = sum/10;
        r.push_back(l);
        for(int i = 1 ; i< n ; i++){
                sum = digits[i]+carry;
                l = sum%10;
                carry = sum/10;
                r.push_back(l);
        }
        if(carry)
            r.push_back(carry);
        reverse(r.begin() , r.end());
        return r;
    }1
        
};
// @lc code=end

