/*
* sử dụng 2 con trỏ 1 con đi nhanh 1 con đi chậm nếu 2 con không gặp nhau thì false
*/

bool hasCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
