/*
* Lật ngược liên kết từ đầu liên kết 1 -> 2 -> 3 thành 1 <- 2 <- 3
*/

class Solution {
public:
    // 7ms
    ListNode* reverseList(ListNode* head){
        if(head == NULL){
            return head;
        }
        ListNode *res = head, *per = head->next;
        head->next = NULL;
        ListNode *temp;
        while(per){
            temp = res;
            res = per;
            per = per->next;
            res->next = temp;
        }
        return res;
    }
    
//     di chuyển node đến vị trí đối xứng
//     53ms
//     ListNode* reverseList(ListNode* head){
//         ListNode *tmp = head;
//         int amountNode = 0;
//         while(tmp != NULL){
//             amountNode++;
//             tmp = tmp->next;
//         }
//         if(amountNode == 0){
//             return tmp;
//         }
//         while(--amountNode){
//             tmp = head;
//             int count = amountNode;
//             while(count--){
//                 int temp = tmp->val;
//                 tmp->val = tmp->next->val;
//                 tmp->next->val = temp;
//                 tmp = tmp->next;
//             }
//         }
//         return head;
//     }
};
