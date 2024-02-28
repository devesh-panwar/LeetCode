class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int miss=0;
        for(int i=1;i<INT_MAX;i++){
            if(!binary_search(arr.begin(),arr.end(),i)){

                miss++;
            }
            if(miss==k) return i;
        }

        return -1;
    }
};