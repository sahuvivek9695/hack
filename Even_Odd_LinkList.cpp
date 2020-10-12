class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return head;
        ListNode *evept=head->next,*odpt=head,*eve_head=head->next;
        
        while(evept && evept->next){
            odpt->next = odpt->next->next;
            evept->next = evept->next->next;
            
            odpt=odpt->next;
            evept=evept->next;
        }
        odpt->next=eve_head;
        return head;
    }
};