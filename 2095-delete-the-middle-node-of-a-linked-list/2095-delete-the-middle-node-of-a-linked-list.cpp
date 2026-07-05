
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
      if(head==NULL || head->next==NULL) return NULL;
       int  count =0;
       ListNode* temp=head;
       while(temp!=NULL){
        count++;
        temp=temp->next;
       }
       int n = count / 2;

       temp=head;
       for(int i=1;i<n;i++){
        temp=temp->next;
       }
       
       temp->next=temp->next->next;
       return head;
    }
};