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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* a=head;
        ListNode* b=head->next;
        ListNode* c=head->next->next;
        if(c==NULL) return {-1,-1};
        int idx=1;
        int fidx=-1;
        int sidx=-1;
        while(c!=NULL){
            if(b->val>a->val&&b->val>c->val||b->val<a->val&&b->val<c->val){
                if(fidx==-1) fidx=idx;
                else sidx=idx;
            }
            a=a->next;
            b=b->next;
            c=c->next;
             idx++;
        }
        if(sidx==-1) return {-1,-1};
        int maxdist=sidx-fidx;

        a=head;
        b=head->next;
        c=head->next->next;
        idx=1;
        fidx=-1;
        sidx=-1;
        int mindist=INT_MAX;
        while(c!=NULL){
            if(b->val>a->val&&b->val>c->val||b->val<a->val&&b->val<c->val){
                 fidx=sidx;
                 sidx=idx;
                if(fidx!=-1){
                    int d=sidx-fidx;
                mindist =min(mindist,d);
                }
            }
            a=a->next;
            b=b->next;
            c=c->next;
            idx++;
        }
         
      
        
        return {mindist,maxdist};



    }
};