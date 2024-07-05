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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        

        ListNode *temp,*prev;
        prev=head;
        temp=head->next;
        int ct=1;
        vector<int>st;
        while(temp->next!=nullptr){
            ct++;
            if(((prev->val > temp->val ) &&( temp->val < temp->next->val))|| ((prev->val< temp->val) &&(temp->val > temp->next->val))){
                
                st.push_back(ct);
            }
            prev=temp;
            
            temp=temp->next;
        }

        if((st.size()<2))    return {-1,-1};
        sort(st.begin(),st.end());
        int mn=INT_MAX;
        for(int i=1;i<st.size();i++){
            mn=min(mn,st[i]-st[i-1]);
        }
        int n=st.size();
        return {mn,st.back()-st.front()};
        //return st;
    }
};