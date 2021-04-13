class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newhead=NULL;
        while(head!=NULL){
            ListNode* temp=head->next;
            head->next=newhead;
            newhead=head;
            head=temp;
        }
        return newhead;
    }
};
