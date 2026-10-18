
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* tempOdd = head;
        ListNode* tempEven = head->next;
        ListNode* tempNex = tempEven;

        while (tempEven != nullptr && tempEven->next != nullptr) {
            tempOdd->next = tempEven->next;
            tempOdd = tempOdd->next;

            tempEven->next = tempOdd->next;
            tempEven = tempEven->next;
        }

        tempOdd->next = tempNex;

        return head;
    }
};
