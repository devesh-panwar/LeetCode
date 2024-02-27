// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long  long start =1;
        long long  end=n;
        while(start<=end){

            long long mid=(start+end)/2;

            bool ans=isBadVersion(mid);

            if(!ans){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return start;
    }
};