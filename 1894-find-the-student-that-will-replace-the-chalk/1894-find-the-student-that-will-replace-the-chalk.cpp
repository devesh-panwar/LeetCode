class Solution {
public:
const long long MOD = 1e9;
    int chalkReplacer(vector<int>& chalk, int k) {
        
         //long su=accumulate(chalk.begin(),chalk.end(),0);
         long long su=0;
         for(auto x:chalk){
            su+=x;
         }
        //su=(su)%MOD;
         k=k%su;
         if(k==0 || k<chalk[0]) return 0;

         

        int n=chalk.size();

         for(int i=0;i<n;i++){
            if(k>=chalk[i]){
                k-=chalk[i];
            }else{
                return i;
            }
         }

        return 0;
    }
};