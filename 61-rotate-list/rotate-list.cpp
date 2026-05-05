class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;

        int size = 1;
        ListNode* temp = head;

        while(temp->next != nullptr){
            temp = temp->next;
            size++;
        }

        temp->next = head;

        int rot = k % size;
        int steps = size - rot;

        ListNode* newTail = head;

        for(int i = 1; i < steps; i++){
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;

        newTail->next = nullptr;

        return newHead;
    }
};