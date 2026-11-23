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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        return head;
    }
    ListNode*curr = head;
    while(curr!=NULL && curr->next!=NULL)
    {
    int gcde = gcd(curr->val,curr->next->val);
    ListNode*temp = curr->next;
    ListNode* node = new ListNode(gcde);
    curr->next=node;
    node->next=temp;
    curr=temp;
    }
    return head;
    }
};