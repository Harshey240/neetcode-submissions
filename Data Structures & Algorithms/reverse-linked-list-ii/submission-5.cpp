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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(left==right)
        {
            return(head);
        }

        int idx = 1;
        ListNode* temp = head;
        ListNode* t2;
        ListNode* prev = nullptr;  

        ListNode* initial = nullptr;  
        ListNode* ans=initial;  
        while(idx<=right)
        {
            if(idx<left)
            {
                initial=temp;
                if(idx==1)
                {
                    ans = initial;
                }
                cout<<"idx: "<<idx<<endl;
                cout<<initial->val<<endl;
            }
            if(idx == left)
            {
                t2=temp;
            }
            if(idx >= left)
            {
                ListNode* t3 = t2->next;
                t2->next = prev;
                prev = t2;
                t2=t3;
                temp = t2;
            }
            else
            {
                temp = temp->next;
            }
            idx++;
        }

        if(initial)
        {
            initial->next = prev;
        }
        else
        {
            ans = prev;
            initial = prev;
        }
        while(prev->next)
        {
            prev = prev->next;
        }
        while(temp)
        {
            prev->next = temp;
            prev = prev->next;
            temp = temp->next;
        }
        return(ans);
    }
};