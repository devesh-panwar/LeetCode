class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        

        vector<int>ans;
        for(int i=0;i<intervals.size();i++){
                int ind=-1;
                int min=INT_MAX;
            for(int j=0;j<intervals.size();j++){
                if(intervals[j][0]>=intervals[i][1] && min>=intervals[j][0]){
                    ind=j;
                    min=intervals[j][0];
                }
            }
            ans.push_back(ind);
        }
        return ans;

        

    

    
    }
};