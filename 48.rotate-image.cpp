/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l = 0 , r = matrix.size()-1;
        while(l<r){
            for(int i = 0 ; i<r-l ; i++){
                int top = l , bottom = r;
                
                // ! Save the top element
                int temp = matrix[top][l+i];

                // ! Move the bottom left to top left
                matrix[top][l+i] = matrix[bottom-i][l];

                // ! Move the bottom right to bottom left
                matrix[bottom-i][l] = matrix[bottom][r-i];

                // ! Move the top right to bottom right
                matrix[bottom][r-i] = matrix[top+i][r];

                // ! Move the temp into top right
                matrix[top+i][r] = temp; 
            }
            l++;
            r--;
        }
    }
};
// @lc code=end

