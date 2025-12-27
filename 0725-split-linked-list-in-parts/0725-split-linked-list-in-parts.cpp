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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size=0;
         vector<ListNode*>v;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        while(k>0){
             if (head == NULL) {
                v.push_back(NULL);
                k--;
                continue;
            }
            int x = (int)ceil((double)size / k);
            ListNode* temp2=head;
            ListNode* prev=NULL;
            for(int i=1;i<=x;i++){
                prev=head;
                 head=head->next;
            }
             
             prev->next=NULL;
           
            v.push_back(temp2);
            size=size-x;
            k=k-1;
 
        }
        return v;
    }
};