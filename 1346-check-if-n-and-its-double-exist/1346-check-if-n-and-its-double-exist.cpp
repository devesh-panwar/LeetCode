class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        for(int x=0;x<arr.size();x++){
            int val=2*arr[x];
            for(int i=0;i<arr.size();i++){
                if(i!=x && arr[i]==val) return true;
            }
            
        }

        return false;
    }
};