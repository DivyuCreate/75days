/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        stack<ListNode *> s;
        if (head == NULL)
            return (NULL);
        ListNode *temp = head;
        while (head)
        {
            s.push(head);
            head = head->next;
        }
        head = temp = s.top();
        s.pop();
        while (!s.empty())
        {
            temp->next = s.top();
            s.pop();
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
};
// @lc code=end
