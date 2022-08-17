/*
* Không có gì để nói quá đơn giản Huy ơi
*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp = nullptr;
        if(head == nullptr) return head;
        while(head && head->val == val){
            temp = head->next;
            delete head;
            head = temp;
        }
        ListNode *perv = head; 
        temp = nullptr;
        while(perv){
            if(perv->val == val){
                temp->next = perv->next;
                delete perv;
                perv = temp->next;
            }
            else{
                temp = perv;
                perv = perv->next;
            }
        }
        return head;
    }
};
