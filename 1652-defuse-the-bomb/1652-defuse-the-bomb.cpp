class Solution {
public:
    int solve1(int i,vector<int>& code, int og_k,int k ){
        int sum=0,j=1,n=code.size(),ctn=k;
        bool fg=false;
        if(og_k<0){ j=-1;fg=true;}
        while(ctn){
            int t=(i+j)%n;
            if(t<0){
                t=n+t;
            }
            if(fg){j--;}
            else{ j++;}
            sum+=code[t];
           
            
            ctn--;
        }
        return sum;
    }
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(k>0){
                ans.push_back(solve1(i,code,k,k));
            }else if(k==0){
                ans.push_back(0);
            }else{
                 ans.push_back(solve1(i,code,k,k*-1));
            }
        }
        return ans;
    }
};