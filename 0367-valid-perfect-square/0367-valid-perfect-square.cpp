class Solution {
public:
    bool isPerfectSquare(int num) {
        // long long ans=0;
        // for(int i=1;i<=num;i++){
        //     if(i*i<=num){
        //         ans=i;
        //     }else{
        //         break;
        //     }
        // }

        long long i=1,j=num,ans=0;
        while(i<=j){
            long long mid=(i+j)/2;
            long long t2=(mid*mid);
            
            if(t2<=num){ ans=mid;
                i=mid+1;
            }else{
                j=mid-1;
            }
        }

        return (ans*ans==num)?true: false;
    }
};