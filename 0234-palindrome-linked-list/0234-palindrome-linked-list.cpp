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
      ListNode* reverse(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* newhead=reverse (head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
        
    }
    
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0);
        ListNode* temp2=dummy;
        while(temp!=NULL){
            temp2->next=new ListNode(temp->val);
            temp2=temp2->next;
                temp=temp->next;
        }
        dummy=dummy->next;
        dummy=reverse(dummy);
        while(dummy!=NULL){
            if(dummy->val!=head->val) return false;
            dummy=dummy->next;
            head=head->next;
        }
        return true;
        
    }
};