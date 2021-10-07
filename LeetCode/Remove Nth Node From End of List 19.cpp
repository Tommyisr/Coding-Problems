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
        
         int count = 0;
    struct ListNode* first = NULL;
    struct ListNode* second = head;
    
    if(second->next == NULL) {
        delete(head);
        head = NULL;
        return head;
    }
    
    
    while(second && second->next != NULL){
        
        second = second->next;
        count++;
        if(count == n) first = head;
        else if(count > n) first = first->next;
        
    }
    
    if(!first){
        struct ListNode* temp;
        temp = head->next;
        delete(head);
        return temp;
    }
    else if(first->next->next){
        struct ListNode* temp;
        temp = first->next;
        first->next->val = temp->next->val;
        first->next = temp->next;
        delete(temp);
    }
    else {
        delete(first->next);
        first->next = NULL;
    }
    
    return head;
        
    }
};
