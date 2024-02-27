class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        
        int first=0;
        int second=0;
        for(auto x:nums){
            first=max(x,first);
            second+=x;
        }

        while(first<second){

            int mid=(first+second)/2;

            int piece=1;
            int c_sum=0;
            for(auto x:nums){

                if(c_sum+x>mid){
                    c_sum=x;
                    piece++;
                }else{
                    c_sum+=x;

                }
            }

            if(piece>k){
                first=mid+1;
            }else{
                second=mid;
            }
        }
        return second;
    }
};