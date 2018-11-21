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
        struct ListNode* res = NULL;
        struct ListNode *temp;
        struct ListNode *prev = NULL; 
        int sum;
        int carry = 0;
     
        while(l1 != NULL || l2 != NULL){
            
           sum = carry + (l1? l1->val: 0) + (l2? l2->val:0);
            if(sum > 9){
                carry = 1;
                sum = sum % 10;
            } else
                carry = 0;
            temp = new ListNode(sum); 
            
            if(res == NULL) 
            res = temp; 
        else 
            prev->next = temp; 
            
            prev  = temp; 
            
        if (l1) l1 = l1->next; 
        if (l2) l2 = l2->next; 
    } 
     if(carry  > 0)
      temp->next = new ListNode(carry); 
  
    
    return res; 
        }
        
};