class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
        vector<int>map(k);
        for(int element : arr){ //n
            int rem = ((element % k) + k ) % k;
            map[rem]++;
        }
        if(map[0]%2!=0){
            return false;
        }
        for(int rem = 1; rem<=k/2; rem++){ //k/2
            int comp = k - rem;
            if(map[rem]!=map[comp]){
                return false;
            }
        }
        return true;

    }
};