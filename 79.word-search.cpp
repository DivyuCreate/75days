/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board[0].size(); // ? This is row size
        int n = board.size(); // ? This is col size
        bool flag = false;
        int  k = 0;
        int i =0;
        int j = 0;
        for( ; i< m ; i++){
            for(; j<n ; j++){
                    if(board[i][j] == word[k]){
                        board[i][j] = '#';
                        flag = true;
                    }
            }
        }
        if(flag){
                for(; i< m ; ){
                    for(; j<n ;){
                        if((i-1>0 and board[i-1][j] == word[k+1])){
                            board[i][j] = '#';
                            i = i-1;
                            flag = true;
                        }
                        else if(i+1<m and board[i+1][j] == word[k+1]){
                            board[i][j] = '#';
                            i = i+1;
                            flag = true;
                        }
                        else if(j-1>0 and board[i][j-1] == word[k+1]){
                            board[i][j] = '#';
                            j = j-1;
                            flag = true;
                        }
                        else if(j+1<n and board[i][j+1] == word[k+1]){
                            board[i][j] = '#';
                            j = j+1;
                            flag = true;
                        }
                        else{
                            flag = false;
                            break;
                        }
                    }
                    if(flag == false)
                        return false;
                    }
                    return true;
                }
                return false;
        }
};
// @lc code=end

