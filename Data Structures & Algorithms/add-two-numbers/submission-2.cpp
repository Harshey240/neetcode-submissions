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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* ans = &dummy;
        ListNode* temp = ans;
        int prev = 0;
        while(l1 && l2)
        {
            int sum = l1->val+l2->val+prev;
            if(sum>9)
            {
                prev = sum/10;
                sum = sum%10;                
            }
            else
            {
                prev = 0;
            }
            ans->next = new ListNode(sum);
            ans=ans->next;
            l1=l1->next;
            l2=l2->next;
        }

        while(l1)
        {
            int sum = l1->val+prev;
            if(sum>9)
            {
                prev = sum/10;
                sum = sum%10;                
            }
            else
            {
                prev = 0;
            }
            l1=l1->next;
            ans->next = new ListNode(sum);
            ans=ans->next;
        }
        while(l2)
        {
            int sum = l2->val+prev;
            if(sum>9)
            {
                prev = sum/10;
                sum = sum%10;                
            }
            else
            {
                prev = 0;
            }
            l2=l2->next;
            ans->next = new ListNode(sum);
            ans=ans->next;

        }
        if(prev!=0)
        {
            ans->next = new ListNode(prev);       
        }
        return(temp->next);
    }
};
