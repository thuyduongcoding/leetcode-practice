/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 // 1,2,3,4,5,6,7,8,9 -> 5
 // 1,2,3,4,5,6 -> 4
 // 1,2,3,4 -> 3

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // int count = countNode(head);
        // ListNode* current = head;
        ListNode* fastptr = head;
        ListNode* slowptr = head;

        while (fastptr->next != nullptr && fastptr->next->next !=nullptr){
            fastptr = fastptr -> next -> next;
            slowptr = slowptr->next;
        }

        if (fastptr->next == nullptr){
            return slowptr;
        } else {
            return slowptr->next;
        }
        // if (count %2 != 0){
        //     for (int i = 0; i < (count-1)/2; i++) {
        //         current = current -> next;
        //     }
        // } else {
        //     for (int i = 0; i < (count)/2; i++) {
        //         current = current -> next;
        //     }
        // }
        // return current;
    }
    // int countNode(ListNode* head) {
    //     int count = 0;
    //     ListNode* current = head;
    //     while(current != nullptr) {
    //         count++;
    //         current = current -> next; 
    //     }
    //     return count;
    // }
};