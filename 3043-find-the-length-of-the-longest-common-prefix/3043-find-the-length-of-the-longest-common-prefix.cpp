class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        

        set<string>st;
         int ans=0;
        for(auto &x:arr1){
            //st.insert(x);
            while(x>0){
                st.insert(to_string(x));
                x/=10;
            }
        }

        for (auto &x : arr2) {
    
    while (x > 0) {
        std::string str_x = std::to_string(x);  
        auto it = st.find(str_x);  
        if (it != st.end()) {  
            int sz=it->size();
            ans = std::max(ans, sz);  
        }
        
        x /= 10;  
    }
}

        return ans;
        // for(auto x:arr1){
        //     for(auto y:arr2){
        //         string x_st=to_string(x);
        //         string y_st=to_string(y);
        //         if(x_st.size()<y_st.size()){

        //             if(y_st.find(x_st)!=std::string::npos) ans=(ans>x_st.size())?ans:x_st.size();

        //         }else{
        //              if(x_st.find(y_st)!=std::string::npos) ans=(ans>y_st.size())?ans:y_st.size();
        //         }

        //     }
        // }
        // return ans;
    }
};