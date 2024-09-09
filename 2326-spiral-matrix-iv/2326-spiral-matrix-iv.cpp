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
    int count=0;
    vector<vector<int>> solve(vector<vector<int> >& matrix,ListNode *temp)
{
        ListNode *t=temp;
    
    int m = matrix.size();

    
    int n = matrix[0].size();

   
    vector<int> result;

   

    
    vector<vector<bool> > seen(m, vector<bool>(n, false));

   
    int dr[] = { 0, 1, 0, -1 };

    
    int dc[] = { 1, 0, -1, 0 };

   
    int r = 0, c = 0;

   
    int di = 0;

    
    for (int i = 0; i < count; ++i) {

       
        matrix[r][c]=(t->val);
       t= t->next;
        
        seen[r][c] = true;

       
        int newR = r + dr[di];
        int newC = c + dc[di];

        
        if (0 <= newR && newR < m && 0 <= newC && newC < n
            && !seen[newR][newC]) {

            
            r = newR;

            
            c = newC;
        }
        else {

           
            di = (di + 1) % 4;

          
            r += dr[di];

            
            c += dc[di];
        }
    }

   
    return matrix;
}
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        

        if(m==1){
            vector<vector<int>>ans(1,vector<int>(n,-1));
            int j=0;
            while(head){
                ans[0][j++]=head->val;
                head=head->next;
            }
            return ans;
        }
        vector<vector<int>>ans(m,vector<int>(n,-1));

        ListNode*temp=head;

        while(temp){
            temp=temp->next;
            count++;
        }
        ans=solve(ans,head);

        return ans;
    }
};