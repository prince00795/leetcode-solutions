 
class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        //deep copy without random pointer
        Node* dummy =new Node(-1);
        Node* tempc=dummy;
        Node* temp=head;
        while(temp!=NULL){
            tempc->next=new Node(temp->val);
            temp=temp->next;
            tempc=tempc->next;
        }
        Node* b=dummy->next;
        Node* a=head;
        //maake  map of original node and dublicate node
        unordered_map<Node*,Node*>m;

         Node* tempa=a;
         Node* tempb=b;
         while(tempa!=NULL){
            m[tempa]=tempb;
            tempa=tempa->next;
            tempb=tempb->next;
         }
         //ab random ponter marking 
         for(auto x: m){
            Node* o=x.first;
            Node* d=x.second;
            if(o->random!=NULL){
                 d->random=m[o->random];
            }
 
         }
         return b;

    }
};