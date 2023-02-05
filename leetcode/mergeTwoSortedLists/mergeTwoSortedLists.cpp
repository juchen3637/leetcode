struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummyHead = new ListNode(0), *dummyHeadFixed = dummyHead; //initialized a new list called 'dummyHead', and set pointer 'dummyHeadFixed' equal to dummyHead to keep the address of the head because we will be moving dummyHead consistantly to dummhead->next
        if (list1 && list2 == nullptr) { // if both lists are empty then just return one of the empty lists
            return list1;
        }

        else if (list1 == nullptr) { // if list 1 is empty, then return list 2
            return list2;
        }

        else if (list2 == nullptr) { // if list 2 is empty, then return list 1
            return list1;
        }

        else {
            while (list1 != nullptr && list2 != nullptr) { // as long as list 1 and list 2 are not equal to null then this while loop runs
                if (list1->val > list2->val) { //if the value of list 1 is greater than the value of list 2
                    dummyHead->next = list2; // add value of list 2 onto dummyHead listNode
                    list2 = list2->next; // move list2 head to next node
                }

                else { // this is for if the value of list1 is less than list 2 or the value of list 1 is equal to the value of list 2
                    dummyHead->next = list1; // add value of list 1 to dummyHead listNode
                    list1 = list1->next; // move list1 head to next node
                }
                dummyHead = dummyHead->next; // moves dummyHead head to newly added node
            }

            dummyHead->next = ((list1 != nullptr) ? list1 : list2); // if list 1 is not equal to null, return list 1. If list 1 is equal to null, return list 2. Basically this returns the final remaining node and adds it to the list dummyHead, depending on which list had larger numbers the final returned node could be from either list1 or list2
            return dummyHeadFixed->next; // dummyHeadFixed is the saved address of list dummyHead, this returns the newly merged list between list 1 and list 2
        }
    }
};