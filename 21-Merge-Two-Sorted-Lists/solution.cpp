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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr && list2 == nullptr) return nullptr;

        ListNode* finalList = new ListNode();
        ListNode* finalHead = finalList;

        ListNode* head1 = list1;
        ListNode* head2 = list2;

        while(head1 != nullptr && head2 != nullptr){
            if(head1->val > head2->val){
                finalHead->val = head2->val;
                head2 = head2->next;
            }
            else if(head2->val > head1->val){
                finalHead->val = head1->val;
                head1 = head1->next;
            }
            else { // both same
                finalHead->val = head1->val;
                head1 = head1->next;

                    finalHead->next = new ListNode();
                    finalHead = finalHead->next;

                finalHead->val = head2->val;
                head2 = head2->next;
            }

            // naya node sirf tab banao jab aage koi element bacha ho
            if(head1 != nullptr || head2 != nullptr){
                finalHead->next = new ListNode();
                finalHead = finalHead->next;
            }
        }

        while(head1 != nullptr){
            finalHead->val = head1->val;
            head1 = head1->next;
            if(head1 != nullptr){
                finalHead->next = new ListNode();
                finalHead = finalHead->next;
            }
        }

        while(head2 != nullptr){
            finalHead->val = head2->val;
            head2 = head2->next;
            if(head2 != nullptr){
                finalHead->next = new ListNode();
                finalHead = finalHead->next;
            }
        }

        return finalList;
    }
};
