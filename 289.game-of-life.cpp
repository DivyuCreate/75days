/*
 * @lc app=leetcode id=289 lang=cpp
 *
 * [289] Game of Life
 */

// @lc code=start
class Solution {
public:
    int count_zero(vector<vector<int>>& board, int i , int j){
        int m = board.size();    // row
        int n = board[0].size(); // col
        int c = 0;
        if( (board[i][j+1] == 0 or board[i][j+1] ==9) and j+1<n)
            c++;
        if((board[i][j-1] == 0 or board[i][j-1] ==9) and j-1>0)
            c++;
        if((board[i+1][j] == 0 or board[i+1][j] ==9) and i+1<m)   
            c++;
        if((board[i-1][j] == 0 or board[i-1][j] ==9) and i-1>0)
            c++;
        if((board[i+1][j+1] == 0 or board[i+1][j+1] ==9)  and j+1<n and i+1 <m)
            c++;
        if((board[i-1][j-1] == 0 or board[i-1][j-1] ==9)  and j-1>0 and i-1>0)
            c++;
        if((board[i-1][j+1] == 0 or board[i-1][j+1] ==9)  and j+1<n and i-1>0)
            c++;
        if((board[i+1][j-1] == 0 or board[i+1][j-1] ==9)  and i+1<m and j-1>0 )
            c++;
        return c;
    }

    int count_one(vector<vector<int>>& board, int i , int j){
        int m = board.size();    // row
        int n = board[0].size(); // col
        int c = 0;
        if( (j+1<n) and  ( (board[i][j+1] == 1) or (board[i][j+1] == 7))  )
            c++;
        if( j-1>=0  and ((board[i][j-1] == 1) or (board[i][j-1] == 7))  )
            c++;
        if( i+1<m  and ((board[i+1][j] == 1) or (board[i+1][j] == 7))  )
            c++;
        if( i-1>=0 and  ((board[i-1][j] == 1) or (board[i-1][j] == 7))  )
            c++;
        if( (j+1<n and i+1 <m ) and ((board[i+1][j+1] == 1) or (board[i+1][j+1] == 7) ) )
            c++;
         
        if( (j-1>=0 and i-1>=0) and((board[i-1][j-1] == 1) or (board[i-1][j-1] == 7))  )
            c++;
        if( (j+1<n and i-1>=0)and ((board[i-1][j+1] == 1) or (board[i-1][j+1] == 7) ) )
            c++;
            
        if( (i+1<m and j-1>=0 )and ((board[i+1][j-1] == 1) or (board[i+1][j-1] == 7) ) )
            c++;
        return c;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0 ; i<m ; i ++ ){
            for(int j = 0 ; j< n ; j++){

                int l = board[i][j];
                // int zero = count_zero(board , i , j );
                int one = count_one(board , i , j );
                // cout<<i<<" "<<one<<"\n";
                if(l==0){
                    if(one == 3)
                         board[i][j] = 9; // 0->9->1   
                }
                else if(l==1){
                    if(one<2)
                        board[i][j] = 7; // 1->7->0
                    else if(one== 2 or one==3)
                        board[i][j] == 1;
                    else if(one>3)
                        board[i][j] = 7;
                }
            }
        }
        for(int i = 0 ; i<m ; i ++ ){
            for(int j = 0 ; j< n ; j++){
                if(board[i][j] == 7 )
                    board[i][j] =0;
                else if(board[i][j] == 9 )
                    board[i][j] = 1;
            }
        }

    }
};
// @lc code=end

