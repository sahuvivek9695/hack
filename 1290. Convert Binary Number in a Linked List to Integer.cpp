class Solution {
public:
    int getDecimalValue(ListNode* head){
        int res=0;
        do{
            res*=2;
            res+=head->val;
            head=head->next;
        }while(head!=NULL);
        return res;
    }
};