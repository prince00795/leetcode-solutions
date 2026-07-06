 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* d= new ListNode(100);
        ListNode* tempd=d;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        bool flag=false;
        while(temp1 !=NULL && temp2!=NULL){
            int value=temp1->val +temp2->val;
            if(flag== true) value=value+1;
            if(value>=10){
                flag=true;
                value=value%10;
            }
            else  flag=false;
            ListNode* newnode= new ListNode(value);
            tempd->next=newnode;
            tempd=newnode;
            temp1=temp1->next;
            temp2=temp2->next;

        }
        if(temp1==NULL && temp2==NULL ) {
            if (flag== true){
            ListNode* newnode= new ListNode(1);
            tempd->next=newnode;
            tempd=newnode;
            }
            return d->next;
        }
        int value=-1;
        if(temp2==NULL){
            while(temp1!=NULL){

             if(flag== true ) value=temp1->val + 1;
            else if(flag==false) value=temp1->val;
            if(value>=10){
                flag=true;
                value=value%10;
            }
             else  flag=false;
            ListNode* newnode= new ListNode(value);
            tempd->next=newnode;
            tempd=newnode;
            temp1=temp1->next;
            }

            if (flag== true){
            ListNode* newnode= new ListNode(1);
            tempd->next=newnode;
            tempd=newnode;
            }
            return d->next;
            
        }

        else if(temp1==NULL){
            while(temp2!=NULL){
                    if(flag== true ) value=temp2->val+1;
            else if(flag==false) value=temp2->val;
            if(value>=10){
                flag=true;
                value=value%10;
            }
             else  flag=false;
            ListNode* newnode= new ListNode(value);
            tempd->next=newnode;
            tempd=newnode;
            temp2=temp2->next;
            }
             if (flag== true){
            ListNode* newnode= new ListNode(1);
            tempd->next=newnode;
            tempd=newnode;
            }
            return d->next;

        }
        
        return d->next;

    }
};