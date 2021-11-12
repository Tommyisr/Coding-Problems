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
        
        // using dummy node
        
        ListNode* dummy = new ListNode(-val);
        
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        ListNode* todel = NULL;
        
        while(curr){
            
            if(curr->val == val){
                prev->next = curr->next;
                todel = curr;
                
            }
            else prev = prev->next;
            
            curr = curr->next;
            
            if(todel){
                delete todel;
                todel = NULL;
            }
        
        }
        
        
        curr = dummy->next;
        delete dummy;
        
        return curr;
        
        
        
        
        //working solution, no dummy node, no delete 
        
//         if(!head) return head;
//         while(head && head->val == val) head = head->next;
        
//         ListNode* prev = head;
//         ListNode* curr = NULL;
        
//         if(prev)  curr = prev->next;
        
//         while(curr){
            
//             if(curr->val == val){
                
//                 prev->next = curr->next;
//             }
//             else {
//                 prev = curr;
//             }
            
//             curr = curr->next;
            
//         }
        
//         return head;
        
    }
};
