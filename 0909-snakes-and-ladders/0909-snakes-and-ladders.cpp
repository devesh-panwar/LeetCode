class Solution {
public:
    pair<int,int>getcoor(int val,int n){

      int x= (n-1) -(val-1)/n;
        int col=(val-1)%n;
      if((n%2==1 && x%2==1)|| (n%2==0 && x%2==0)) col=(n-1)-(col);

      return make_pair(x,col);
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        
        queue<int>q;
        int n=board.size();
        vector<vector<bool>>visit(n,vector<bool>(n,false));
        q.push(1);
        visit[n-1][0]=true;
        int step=0;
        while(!q.empty()){

                int sz=q.size();
                while(sz--){
                    int x=q.front();
                    q.pop();

                    if(x==n*n) return step;
                    for(int k=1;k<=6;k++){
                        
                        int val=x+k;
                        if(val>n*n) break;
                        pair<int,int>cor=getcoor(val,n);
                        int row=cor.first;
                        int col=cor.second;
                        if(visit[row][col]==true) continue;

                            visit[row][col]=true;
                        if(board[row][col]==-1) q.push(val);
                        else q.push(board[row][col]);
                    }

                    
                }

                step++;
        }
            return -1;
    }
};