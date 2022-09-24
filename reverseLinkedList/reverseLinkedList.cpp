struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode *current, *prev, *next; // creates the following pointers: current, prev, next
    current = head; // sets current equal to head, the first node of the list
    prev = next = nullptr; // sets both prev and next to null

        while (current != nullptr) { // this while loop will run as long as current is not equal to null
            next = current->next; // sets next equal to the node current is pointing towards
            current->next = prev; // sets the pointer from current to prev (flips the pointer direction)
            prev = current; // moves prev from null to the node current is at
            current = next; // moves current from its position to the next node where next is located at
        }
        head = prev; // sets head equal to prev
        return prev; // returning prev will return the reversed list
    }
};