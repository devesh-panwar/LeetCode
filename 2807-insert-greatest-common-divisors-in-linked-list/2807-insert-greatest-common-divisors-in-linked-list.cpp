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
    int gcd(int a,int b){
        if(b==0) return a;

        return gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        if(!(head->next)) return head;

        ListNode *temp= head;

        while( temp && temp->next){
            ListNode *nx=temp->next;
            int gc=gcd(temp->val,nx->val);
            ListNode *nw= new ListNode(gc,nx);
            temp->next=nw;
            temp=nx;
        }

        return head;

    }
};