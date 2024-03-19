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
    ListNode* deleteDuplicates(ListNode* head) {

     ListNode *temp=head;
    ListNode *prev=nullptr;
     while(temp){


        if(prev!=nullptr && prev->val==temp->val){
           // ListNode *t2=temp;

            prev->next=temp->next;
            temp=temp->next;
        }else{
        prev=temp;
        temp=temp->next;
        }
       
     } 
      return head;  
    }
};