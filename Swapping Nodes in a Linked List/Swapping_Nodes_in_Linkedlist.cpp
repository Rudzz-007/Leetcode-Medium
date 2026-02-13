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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *slow = head;
        ListNode *fast = head;
        int n=0;
        while (fast != NULL)
        {
            fast = fast->next;
            n++;
        }
        fast=head;
        // traverse fast to (n+1) steps
        for (int i = 1; i <= n-k ; i++)
        {
            // slow = slow->next;
            fast = fast->next;
        }
        for (int i = 1; i < k ; i++)
        {
            // slow = slow->next;
            slow = slow->next;
        }
        int temp;
        temp=slow->val;
        slow->val=fast->val;
        fast->val=temp;
        return head;   
    }
};