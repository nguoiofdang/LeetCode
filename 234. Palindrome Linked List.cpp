/*
*  sử dụng 2 con trỏ, 1 con di chuyển nhanh x2 con còn lại sau cùng tìm được address node giữa rồi đồi chiều liên kết của nữa liên kết sau
*/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head, *prev, *temp;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        prev = slow, slow = slow->next, prev->next = NULL;
        while (slow)
            temp = slow->next, slow->next = prev, prev = slow, slow = temp;
        fast = head, slow = prev;
        while (slow)
            if (fast->val != slow->val) return false;
            else fast = fast->next, slow = slow->next;
        return true;
    }
};
