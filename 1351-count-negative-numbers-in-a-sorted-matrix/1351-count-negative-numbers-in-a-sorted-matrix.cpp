class Solution {
public:
    int count_negative(vector<vector<int>>& grid,int row){

        int lw=0,hi=grid[0].size()-1;

        while(lw<=hi){

            int mid=(lw+hi)/2;

            if(grid[row][mid]>=0){
                lw=mid+1;
            }else{
                hi=mid-1;
            }
        }

        return grid[0].size()-1-hi;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            ans+=count_negative(grid,i);
        }
        return ans;
    }
};