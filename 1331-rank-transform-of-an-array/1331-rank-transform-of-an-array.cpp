class Solution {
public:
    
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int>ind;

        for(int i=0;i<arr.size();i++){
            ind.push_back(i);
        }

        sort(ind.begin(),ind.end(),[&arr](int x,int y){
            return arr[x]<arr[y];
        });

        int rnk=0;
        int prv=INT_MAX;
        vector<int>ans(arr.size());
        for(auto &x:ind){

            if(arr[x]!=prv){
                prv=arr[x];
                rnk++;
            }
            ans[x]=rnk;
        }
        return ans;

    }
};