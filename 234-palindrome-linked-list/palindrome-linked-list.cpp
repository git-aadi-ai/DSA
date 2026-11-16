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
    bool isPalindrome(ListNode* head) {
     ListNode*fast = head;
     ListNode*slow = head;
     //FIND MIDDLE USING FAST AND SLOW POINTER
     while(fast!=NULL && fast->next!=NULL)
     {
        slow=slow->next;
        fast=fast->next->next;
     }
     // REVERSE THE HALF LINKED LIST
     ListNode*prev=slow;
     slow=slow->next;
     prev->next=NULL;
     while(slow!=NULL)
     {
        ListNode*curr = slow->next;
        slow->next=prev;
        prev=slow;
        slow=curr;
     }
    // USING TWO POINTER COMAPARE BOTH THE LL
    ListNode*p1 = head;
    ListNode*p2 = prev;
    while(p2!=NULL)
    {
      if(p1->val != p2->val)
      {
        return false;
      }
      p1=p1->next;
      p2=p2->next;
    }
    return true;
    }
};