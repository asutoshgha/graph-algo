class Solution {
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
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* store=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp=reverseList(slow->next);
        int flag=1;
        while(temp){
            if(store->val == temp->val){
                store=store->next;
                temp=temp->next;
            }
            else{
               flag=0;
                break;
            }
                
        }
        if(temp == NULL && flag == 1)
            return true;
        else
            return false;
    }
};
//https://leetcode.com/problems/palindrome-linked-list/
