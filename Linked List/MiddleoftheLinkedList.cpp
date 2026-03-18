// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.

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
    ListNode* middleNode(ListNode* head) {
        int count =1;
        struct ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        temp=head;
        if(count%2==0){
        for(int i=1;i<(count/2)+1;i++){
            temp=temp->next;
        }
        return temp;
        }
        else{
            for(int i=0;i<(count/2);i++){
            temp=temp->next;
        }
        return temp;
        }
    }
};

// Example 1:

// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.

