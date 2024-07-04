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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp,*head1,*temp1;
        temp=head;
        head1=new ListNode(0);
        temp1=head1;       
        temp=temp->next;
        int sum=0;
        while(temp){

            if(temp->val==0){
                temp1->next=new ListNode(sum);
                temp1=temp1->next;
                sum=0;
            }
           else  sum+=temp->val;
            temp=temp->next;
           
        }
        return head1->next;
    }
};