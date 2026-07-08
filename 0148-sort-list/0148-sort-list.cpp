 
class Solution {
public:
    ListNode* findMiddle(ListNode* head){
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast!=NULL&&fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* merge2list(ListNode* head1,ListNode* head2){
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(head1!=NULL && head2!=NULL){
            if(head1->val<head2->val){
                temp->next=head1;
                temp=temp->next;
                head1=head1->next;
            }
            else{
                temp->next=head2;
                temp=temp->next;
                head2=head2->next;
            }
        }
        if(head1==NULL) temp->next=head2;
        else temp->next =head1;
        return dummy->next;

    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* left=head;
        ListNode* middle=findMiddle(head);
        ListNode* right=middle->next;
        middle->next=NULL;
        left=sortList(left);
        right=sortList(right);
        return merge2list(left,right);
         
    }
};