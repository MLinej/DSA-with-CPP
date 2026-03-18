// Given the head of a singly linked list, reverse the list, and return the reversed list.

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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=head;
        if(head==NULL || head->next==NULL) return head;
        if(head->next->next==NULL){
            head=head->next;
            prev->next=NULL;
            head->next=prev;
            return head;
        }

        head=head->next;
        curr=head;
        prev->next=NULL;
        head=head->next;
        curr->next=prev;
        prev=curr;

        while(head->next!=NULL){
        curr=head;
        head=head->next;
        curr->next=prev;
        prev=curr;  
        }

        curr=head;
        curr->next=prev;
        return head;
    }
};

// Example 1:

// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]