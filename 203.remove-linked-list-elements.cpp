/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *curr = head , *forw = head;
        ListNode *last = NULL;
        while(curr){
            if(curr->val == val){
                forw = curr->next;
                if(last==NULL)
                    head = forw;
                curr->next = NULL;
                last->next = forw;
            }
            else{
            last = curr;
          
            }
            curr = curr->next;
        }
        return head;
    }

};
// @lc code=end

