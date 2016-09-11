/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL || l2==NULL)
        {
            return l1 == NULL ? l2 : l1; 
        }
        ListNode* p1 = l1,*p2 = l2,*pre = NULL;
        int carry = 0;
        while(p1!=NULL)
        {
            int val1 = p1->val;  
            int val2 = p2 == NULL? 0 : p2->val; 

            int val = val1+val2+carry;
            if(val>9)
            {
                p1->val = val%10;
                carry = 1;
            }
            else
            {
                p1->val = val;
                carry = 0;
            }
            if(p1->next==NULL&&p2)
            {
                p1->next = p2->next;
                p2->next = NULL;
                
            }
            pre = p1;  
            p1 = p1->next;  
            p2 = p2 == NULL ? NULL : p2->next;  

            
        }
        if(carry == 1)  
        {  
            ListNode* newNode = new ListNode(1);  
            pre->next = newNode;  
            
        }  
        return l1;
    }
};