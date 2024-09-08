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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        ListNode*temp=head;
        int count=0;

        while(temp){
            count++;
            temp=temp->next;
        }
        int eq=count/k;
        int rem=count%k;
        vector<int>el(k,eq);
        vector<ListNode*>ans(k);

        for(int i=0;i<k;i++){
            if(rem>0){
                el[i]++;
                rem--;
            }
        }
        temp=head;
        int j=0;
        while(temp){

            int i=1;
            ListNode *t=new ListNode(temp->val);
            ans[j]=t;
            temp=temp->next;
            while(i<el[j] && temp){
                t->next=new ListNode(temp->val);
                t=t->next;
                temp=temp->next;
                i++;
            }
            j++;
        }
        return ans;
    }
};