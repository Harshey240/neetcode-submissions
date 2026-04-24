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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int sz = 0;
        ListNode*temp = head;
        while(temp)
        {
            sz++;
            temp = temp -> next;
        }

        if(sz==1 && n==1)
        {
            return(nullptr);
        }

        n = sz-n;
        cout<<n<<endl;
        int idx = 0;

        if(n==idx)
        {
            head=head->next;
            return(head);
        }

        ListNode* temp2 = head;
        while(idx<(n-1))
        {       
            temp2 = temp2->next;
            idx++;
            cout<<temp2->val<<endl;
        }
        temp2->next = temp2->next->next;
        return(head);
    }
};
