/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0 , bottom = matrix.size();
        int left = 0 , right = matrix[0].size();
        vector<int> ans;

        while(left<right && top<bottom){

            // ! Covering from left to right boundary
            for(int i = left; i < right ; i++ )
                ans.push_back(matrix[top][i]);
            top++;

            // ! Covering from top to bottom
            for(int i = top; i < bottom ; i++ )
                ans.push_back(matrix[i][right-1]);
            right--;

            // ! CASE FOR ONLY ROW MATRIX OR COLUMN MATRIX
            if(left>=right or top>=bottom)
                break;
            
            // ! Covering from right to left;
            for(int i = right-1; i>=left ; i-- )
                ans.push_back(matrix[bottom-1][i]);
            bottom--;

            // ! Covering from bottom to left
            for(int i = bottom-1; i>=top ; i-- )
                ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }
};
// @lc code=end

